
public class Publication implements Display {
	private String title;
	private String language;
	private double price;
	
	public Publication(String title, String language, double price) {
		this.title = title;
		this.language = language;
		this.price = price;
	}
	
	public void print() {
		System.out.println(String.format("%s %s %.2f", this.title, this.language, this.price));
	}
}
