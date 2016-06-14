import java.util.Arrays;

import javax.jms.Connection;
import javax.jms.ConnectionFactory;
import javax.jms.Destination;
import javax.jms.JMSException;
import javax.jms.MessageConsumer;
import javax.jms.MessageProducer;
import javax.jms.Session;
import javax.jms.TextMessage;
import javax.naming.Context;
import javax.naming.InitialContext;
import javax.naming.NamingException;

public class Client {
	Context context = null;
	ConnectionFactory factory = null;
	Connection connection = null;
	Destination destination = null;
	Session session = null;
	MessageConsumer receiver = null;
	MessageProducer sender = null;

	public Client() {
		try {
			this.context = new InitialContext();
			this.factory = (ConnectionFactory) context.lookup("ConnectionFactory");
			this.destination = (Destination) context.lookup("topic1");

			this.connection = factory.createConnection();
			this.session = this.connection.createSession(false, Session.AUTO_ACKNOWLEDGE);
			this.receiver = session.createConsumer(destination, null, true);
			this.sender = session.createProducer(destination);

			this.connection.start();
		} catch (NamingException | JMSException e) {
			e.printStackTrace();
		}
	}

	private void requestLectures() {
		try {
			this.sender.send(this.session.createTextMessage("getlecturenames"));
			TextMessage msg = (TextMessage) this.receiver.receive();
			String text = msg.getText();
			String[] lectures = text.split(":");
			System.out.println(Arrays.toString(lectures));
		} catch (JMSException e) {
			e.printStackTrace();
		}
	}

	private void addLecture(String title, int ects, String lecturer) {
		try {
			String[] commandParts = { "addlecture", title, Integer.toString(ects), lecturer };
			this.sender.send(this.session.createTextMessage(String.join(":", commandParts)));

			TextMessage msg = (TextMessage) this.receiver.receive();
			String status = msg.getText();
			System.out.println(status);
		} catch (JMSException e) {
			e.printStackTrace();
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
		Client c = new Client();
		c.requestLectures();
		c.addLecture("DS", 5, "Klingemann");
		c.addLecture("RTS", 5, "WERONEK");
		c.requestLectures();
		c.shutdown();

		System.exit(0);
	}
}
