import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class MainRead {
	@SuppressWarnings("unchecked")
	public static void main(String[] args) {
		List<Display> publications = new ArrayList<Display>();

		try {
			FileInputStream fin = new FileInputStream("objects.ser");
			ObjectInputStream ois = new ObjectInputStream(fin);
			publications = (List<Display>) ois.readObject();
			ois.close();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}

		for (Iterator<Display> it = publications.iterator(); it.hasNext();) {
			Display d = it.next();
			d.print();
		}
	}
}
