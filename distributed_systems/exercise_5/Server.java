import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.List;

import javax.jms.Connection;
import javax.jms.ConnectionFactory;
import javax.jms.Destination;
import javax.jms.JMSException;
import javax.jms.Message;
import javax.jms.MessageConsumer;
import javax.jms.MessageListener;
import javax.jms.MessageProducer;
import javax.jms.Session;
import javax.jms.TextMessage;
import javax.naming.Context;
import javax.naming.InitialContext;
import javax.naming.NamingException;

public class Server {
	Student student = null;

	Context context = null;
	ConnectionFactory factory = null;
	Connection connection = null;
	Destination destination = null;
	Session session = null;
	MessageConsumer receiver = null;
	MessageProducer sender = null;

	public Server() {
		this.student = new Student("Oliver");

		try {
			this.context = new InitialContext();
			this.factory = (ConnectionFactory) context.lookup("ConnectionFactory");
			this.destination = (Destination) context.lookup("topic1");

			this.connection = factory.createConnection();
			this.session = this.connection.createSession(false, Session.AUTO_ACKNOWLEDGE);
			this.receiver = session.createConsumer(destination, null, true);
			this.sender = session.createProducer(destination);

			receiver.setMessageListener(new MessageListener() {
				@Override
				public void onMessage(Message msg) {
					if (msg instanceof TextMessage) {
						TextMessage text = (TextMessage) msg;
						try {
							String command = text.getText();
							handleCommand(command);
						} catch (JMSException e) {
							e.printStackTrace();
						}
					}
				}
			});

			this.connection.start();
		} catch (NamingException | JMSException e) {
			e.printStackTrace();
		}
	}

	protected void handleCommand(String command) {
		String[] commandParts = command.split(":");

		switch (commandParts[0]) {
		case "getlecturenames":
			List<String> lectureNames = student.getLectureNames();
			try {
				TextMessage msg = this.session.createTextMessage(String.join(":", lectureNames));
				this.sender.send(msg);
			} catch (JMSException e) {
				e.printStackTrace();
			}
			break;
		case "addlecture":
			student.addLecture(commandParts[1], Integer.parseInt(commandParts[2]), commandParts[3]);
			try {
				TextMessage msg = this.session.createTextMessage("SUCCESSFUL");
				this.sender.send(msg);
			} catch (JMSException e) {
				e.printStackTrace();
			}
			break;
		default:
			System.out.println("Unknown command");
		}
	}

	private void shutdown() {
		try {
			if (this.session != null) {
				this.session.close();
			}
		} catch (JMSException e) {
			e.printStackTrace();
		}

		try {
			if (this.connection != null) {
				this.connection.close();
			}
		} catch (JMSException e) {
			e.printStackTrace();
		}
	}

	public static void main(String[] args) {
		Server s = new Server();

		System.out.println("Waiting for messages...");
		System.out.println("Press [return] to quit");

		BufferedReader waiter = new BufferedReader(new InputStreamReader(System.in));
		try {
			waiter.readLine();
		} catch (IOException e) {
			e.printStackTrace();
		} finally {
			if (waiter != null) {
				try {
					waiter.close();
				} catch (IOException e) {
					e.printStackTrace();
				}
			}

			s.shutdown();
		}

		System.exit(0);
	}
}
