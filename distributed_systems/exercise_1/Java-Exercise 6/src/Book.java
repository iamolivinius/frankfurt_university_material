
public class Book extends Publication {
	private static final long serialVersionUID = 5829936605392916231L;
	String author;
	long isbn;
	
	public Book(String title, String language, double price, String author, long isbn) {
		super(title, language, price);
		this.author = author;
		this.isbn = isbn;		
	}
	
	public void print() {
		super.print();
		System.out.println(String.format("%s %d", this.author, this.isbn));
	}
}
