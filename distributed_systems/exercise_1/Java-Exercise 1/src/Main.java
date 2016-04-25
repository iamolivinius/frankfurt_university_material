
public class Main {
	public static void main(String[] args) {
		fac(5);
	}

	private static int fac(int n) {
		if (n == 0)
			return 1;
		else
			return n * fac(n - 1);
	}
}
