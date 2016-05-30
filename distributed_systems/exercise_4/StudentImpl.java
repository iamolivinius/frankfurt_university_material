import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.util.HashSet;
import java.util.Set;

public class StudentImpl extends UnicastRemoteObject implements Student {
	private static final long serialVersionUID = 10468577824139802L;
	private String name;
	private Set<Lecture> lectures;

	public StudentImpl(String name) throws RemoteException {
		super();
		this.name = name;
		this.lectures = new HashSet<Lecture>();
	}

	@Override
	public String getName() {
		return this.name;
	}

	@Override
	public Set<Lecture> getLectures() {
		return this.lectures;
	}

	@Override
	public Lecture findLecture(String name) throws RemoteException {
		for (Lecture l : this.lectures) {
			if (l.getName().equals(name)) return l;
		} 
		return null;
	}

	@Override
	public void addLecture(String name, int ects, String lecturer) throws RemoteException {
		this.lectures.add(new LectureImpl(name, ects, lecturer));
	}
}
