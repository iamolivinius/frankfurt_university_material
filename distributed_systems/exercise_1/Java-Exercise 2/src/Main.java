import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Main {
	public static void main(String[] args) {
		List<Publication> publications = new ArrayList<Publication>();
		publications.add(new Publication("Test1", "de", 1.0));
		publications.add(new Book("Test2", "en", 5.0, "Oliver", 1234567890));

		for(Publication p : publications) {
			p.print();
		}
	}
}
