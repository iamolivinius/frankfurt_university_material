import java.rmi.Naming;

public class Server {

	public static void main(String[] args) {
		try {
			Student student = new StudentImpl("Oliver");
			Naming.rebind("Student", student);
			System.out.println("The server is up");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
