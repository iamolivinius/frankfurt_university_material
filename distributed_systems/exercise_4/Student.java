import java.rmi.Remote;
import java.rmi.RemoteException;
import java.util.Set;

public interface Student extends Remote {

	String getName() throws RemoteException;

	Set<Lecture> getLectures() throws RemoteException;

	Lecture findLecture(String name) throws RemoteException;

	void addLecture(String name, int ects, String lecturer) throws RemoteException;

}
