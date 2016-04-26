
public class Lecture {
	private String name;
	private int ects;
	private String lecturer;

	public Lecture(String name, int ects, String lecturer) {
		this.name = name;
		this.ects = ects;
		this.lecturer = lecturer;
	}

	String getName() {
		return this.name;
	}

	int getECTS() {
		return this.ects;
	}

	String getLecturer() {
		return this.lecturer;
	}

	void setLecturer(String name) {
		this.lecturer = name;
	}
}
