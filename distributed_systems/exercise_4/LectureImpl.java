import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

public class LectureImpl extends UnicastRemoteObject implements Lecture {
	private static final long serialVersionUID = -1205148734781963L;
	private String name;
	private int ects;
	private String lecturer;
	
	public LectureImpl(String name, int ects, String lecturer) throws RemoteException {
		super();
		this.name = name;
		this.ects = ects;
		this.lecturer = lecturer;
	}

	@Override
	public String getName() {
		return this.name;
	}

	@Override
	public int getEcts(){
		return this.ects;
	}

	@Override
	public String getLecturer() {
		return this.lecturer;
	}

	@Override
	public void setLecturer(String lecturer) {
		this.lecturer = lecturer;
	}
}
