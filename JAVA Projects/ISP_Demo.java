import javax.swing.JOptionPane;  // Needed for JOptionPane class


public class PROB3_CHAL13   // Internet Service Provider
{
   public static void main(String[] args)
   {
      String customerLetter;
      String input;  // To hold string input
      int customerHours;
      double totalCharges;
      
      input = JOptionPane.showInputDialog("Enter the number of hours " + 
                                       "used.");
      customerHours = Integer.parseInt(input);

      // Enter letter of package
      customerLetter = JOptionPane.showInputDialog("Enter the letter of the " + 
                                       "package purchased.");
      
      // Determine the total charges for internet use
      switch (customerLetter)
      {
         case "A":
         case "a":
            totalCharges = ((customerHours-10)*(2))+9.95;
            JOptionPane.showMessageDialog(null, "Your total charges are $" + totalCharges) ;
            break;
            
         case "B":
         case "b":
            totalCharges = ((customerHours-20)*(1))+13.95;
            JOptionPane.showMessageDialog(null, "Your total charges are $" + totalCharges) ;
            break;
            
        case "C":
        case "c":
            totalCharges = 19.95;
            JOptionPane.showMessageDialog(null, "Your total charges are $" + totalCharges) ;
            break;
            
        default :
            JOptionPane.showMessageDialog(null, "invalid choice") ;
      }
   }
}


            
   
     
