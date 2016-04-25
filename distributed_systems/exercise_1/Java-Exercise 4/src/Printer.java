
public class Printer extends Thread {
	private int id;
	
	public Printer(int id) {
		this.id = id;		
	}
	
	@Override
	public void run() {
		for (int i = 0; i < 5; i++) {
			System.out.println(this.id);
			
			try {
				Thread.sleep(3000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}
