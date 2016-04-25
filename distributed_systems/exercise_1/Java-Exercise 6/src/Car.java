import java.io.Serializable;

public class Car implements Display, Serializable {
	private static final long serialVersionUID = 98182103379247607L;
	private String colour;
	private int horsepower;
	private double weight;
	
	public Car(String colour, int horsepower, double weight) {
		this.colour = colour;
		this.horsepower = horsepower;
		this.weight = weight;
	}
	
	public void print() {
		System.out.println(String.format("%s %d %.2f", this.colour, this.horsepower, this.weight));
	}

}
