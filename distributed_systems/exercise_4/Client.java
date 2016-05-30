import java.rmi.Naming;
import java.util.Set;

public class Client {

	public static void main(String[] args) throws Exception {
		try {
			Student student = (Student) Naming.lookup("rmi://localhost/Student");
			student.addLecture("DS", 5, "KLINGEMANN");
			student.addLecture("RTS", 5, "WERONEK");
			
			Lecture ds = student.findLecture("DS");
			System.out.println(String.format("%s %d %s", ds.getName(), ds.getEcts(), ds.getLecturer()));
			ds.setLecturer("WERONEK");
			System.out.println(String.format("%s %d %s", ds.getName(), ds.getEcts(), ds.getLecturer()));			
			
			Set<Lecture> attendedLectures = student.getLectures();			
			int sumEcts = 0;
			for (Lecture l : attendedLectures) {
				sumEcts += l.getEcts();
			}			
			System.out.println(sumEcts);
			
			System.out.println(student.getName());
		} catch (Exception e) {
			e.printStackTrace();
		}

	}

}
