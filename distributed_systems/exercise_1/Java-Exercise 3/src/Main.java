import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class Main {
	public static void main(String[] args) {
		Set<String> strings = new HashSet<String>();

		for (int i = 0; i < args.length; i++) {
			strings.add(args[i]);
		}
		
		for (Iterator<String> s = strings.iterator(); s.hasNext(); ) {
			System.out.println(s.next());
		}
	}
}
