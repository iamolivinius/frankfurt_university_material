import java.io.Serializable;
import java.util.List;

public class Command implements Serializable {
	private static final long serialVersionUID = -8324860847127752934L;
	private String methodName;
	private List<String> attributes;
	private String status;

	public Command(String name) {
		this.setMethodName(name);
	}

	public String getMethodName() {
		return methodName;
	}

	public void setMethodName(String methodName) {
		this.methodName = methodName;
	}

	public List<String> getAttributes() {
		return attributes;
	}

	public void setAttributes(List<String> attributes) {
		this.attributes = attributes;
	}

	public String getStatus() {
		return status;
	}

	public void setStatus(String status) {
		this.status = status;
	}
}
