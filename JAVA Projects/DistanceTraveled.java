import javax.swing.JOptionPane;

public class PROB7_CHAL9 // Distance Traveled Modification
{
	public static void main(String[] args) // main method
	{
		int d;
		int s;
		int t;
		String input;

      // Get speed from user
		input = JOptionPane.showInputDialog("What is the speed " +
		"of the vehicle in miles-per-hour?");
		s = Integer.parseInt(input);
      
      // Condition requiring a positive speed
		while (s < 0)
		{
			input = JOptionPane.showInputDialog("What is the speed " +
			"of the vehicle in miles-per-hour? " +
			"*Please enter a POSITIVE number*");
			s = Integer.parseInt(input);
		}

      // Get hours-traveled from user
		input = JOptionPane.showInputDialog("How many hours " +
		"has the vehicle traveled for?");
		t = Integer.parseInt(input);
      
      // Greater than 1 requirement
		while (t < 1)
		{
			input = JOptionPane.showInputDialog("How many hours " +
			"has the vehicle traveled for? " +
			"*Please enter a value that is no less than 1*");
			t = Integer.parseInt(input);
		}
      
      //Calculation of d
		d = s * t;

      // Display Output
		String out = "Hour Distance Traveled\n----------------------------------\n\nTotal Hours: " + t + "\nTotal Distance: " + d + "\n\n";
		for(int i=1; i<=t; i++)
		{
 			out+= "Hour " + i + ": " + (s*i) + " miles traveled\n";
		}
		JOptionPane.showMessageDialog(null, out);
	}
}