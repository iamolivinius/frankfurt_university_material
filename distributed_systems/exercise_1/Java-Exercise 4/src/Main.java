import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) {
		int tid = 0;
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		
		while (true) {
			try {
				in.readLine();
				
				Printer p = new Printer(tid++);
				p.start();
			} catch (IOException e) {
				System.out.println(" Error: " + e.getMessage());
			}
		}
	}
}
