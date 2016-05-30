import java.rmi.Remote;
import java.rmi.RemoteException;

public interface Lecture extends Remote {
	
	String getName() throws RemoteException;
	
	int getEcts() throws RemoteException;
	
	String getLecturer() throws RemoteException;
	
	void setLecturer(String lecturer) throws RemoteException;
	
}
