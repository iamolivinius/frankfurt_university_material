import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.List;

public class MainWrite {
	public static void main(String[] args) {
		List<Display> publications = new ArrayList<Display>();
		publications.add(new Publication("Test1", "de", 1.0));
		publications.add(new Book("Test2", "en", 5.0, "Oliver", 1234567890));
		publications.add(new Car("red", 500, 1000.0));

		try {
			FileOutputStream fout = new FileOutputStream("objects.ser");
			ObjectOutputStream oos = new ObjectOutputStream(fout);
			oos.writeObject(publications);
			oos.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
