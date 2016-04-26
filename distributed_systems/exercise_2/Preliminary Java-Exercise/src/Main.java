
public class Main {
	public static void main(String[] args) {
		Student s = new Student("Oliver");
		s.addLecture("DS", 10, "Klingemann");
		s.addLecture("RTS", 5, "Weronek");

		int sum = 0;
		for (Lecture l : s.getLectures()) {
			sum += l.getECTS();
		}

		System.out.println(sum);
	}
}
