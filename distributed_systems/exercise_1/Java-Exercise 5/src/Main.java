import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Main {
	public static void main(String[] args) {
		List<Display> publications = new ArrayList<Display>();
		publications.add(new Publication("Test1", "de", 1.0));
		publications.add(new Book("Test2", "en", 5.0, "Oliver", 1234567890));
		publications.add(new Car("red", 500, 1000.0));

		for(Display p : publications) {
			p.print();
		}
	}
}
