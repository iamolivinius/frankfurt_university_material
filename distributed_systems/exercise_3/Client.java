import java.io.Console;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;
import java.util.Arrays;

public class Client {
	public static void main(String[] args) {
		int port = 5000;
		String host = "localhost";
		Console console = System.console();

		try (Socket clientSocket = new Socket(host, port)) {
			ObjectOutputStream oos = new ObjectOutputStream(clientSocket.getOutputStream());
			ObjectInputStream ois = new ObjectInputStream(clientSocket.getInputStream());

			while (true) {
				System.out.println("a) add lecture");
				System.out.println("b) get lecture names");
				System.out.println("c) exit");
				String selection = console.readLine("select: ");

				switch (selection) {
				case "c":
					System.exit(0);
					break;
				case "a":
					Command addLecture = new Command("ADDLECTURE");
					addLecture.setAttributes(Arrays.asList("DS", "10", "Klingemann"));
					oos.writeObject(addLecture);
					oos.flush();
					addLecture = (Command) ois.readObject();
					System.out.println("Status: " + addLecture.getStatus());
					break;
				case "b":
					Command getLectureNames = new Command("GETLECTURENAMES");
					oos.writeObject(getLectureNames);
					oos.flush();
					getLectureNames = (Command) ois.readObject();
					System.out.println("Lecture names: " + getLectureNames.getAttributes());
					break;
				default:
					break;
				}

				System.out.println();
			}
		} catch (IOException | ClassNotFoundException e) {
			e.printStackTrace();
		}
	}
}
