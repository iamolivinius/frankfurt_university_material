import java.io.EOFException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.List;

public class Server {
	public static void main(String[] args) {
		int port = 5000;
		Student student = new Student("Oliver");

		try (ServerSocket socket = new ServerSocket(port)) {
			while (true) {
				Command command;
				Socket connection = socket.accept();
				ObjectInputStream ois = new ObjectInputStream(connection.getInputStream());
				ObjectOutputStream oos = new ObjectOutputStream(connection.getOutputStream());

				try {
					while ((command = (Command) ois.readObject()) != null) {
						switch (command.getMethodName()) {
						case "GETLECTURENAMES":
							command.setAttributes(student.getLectureNames());
							oos.writeObject(command);
							oos.flush();
							break;
						case "ADDLECTURE":
							List<String> attributes = command.getAttributes();
							String name = attributes.get(0);
							int ects = Integer.parseInt(attributes.get(1));
							String lecturer = attributes.get(2);

							student.addLecture(name, ects, lecturer);

							command.setStatus("SUCCESS");
							oos.writeObject(command);
							oos.flush();
							break;
						default:
							break;
						}
					}
				} catch (EOFException e) {
					connection.close();
				}
			}
		} catch (IOException | ClassNotFoundException e) {
			e.printStackTrace();
		}
	}
}
