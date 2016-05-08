import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Student {
	private String name;
	private Set<Lecture> lectures;

	public Student(String name) {
		this.name = name;
		this.lectures = new HashSet<Lecture>();
	}

	Lecture searchLecture(String name) {
		for (Lecture l : this.lectures) {
			if (l.getName() == name) {
				return l;
			}
		}

		return null;
	}

	void addLecture(String name, int ects, String lecturer) {
		this.lectures.add(new Lecture(name, ects, lecturer));
	}

	Set<Lecture> getLectures() {
		return this.lectures;
	}

	String getName() {
		return this.name;
	}

	List<String> getLectureNames() {
		List<String> lectureNames = new ArrayList<String>();
		
		for (Lecture l : this.lectures) {
			lectureNames.add(l.getName());
		}
		
		return lectureNames;
	}
}
