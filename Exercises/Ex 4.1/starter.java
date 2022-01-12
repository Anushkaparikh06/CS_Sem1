import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	Scanner sc = new Scanner(System.in);
	System.out.println("Do you like noodles");
	String noodles = sc.nextLine();
	if(noodles.equals("yes"))
	{
	System.out.println("do you like spicy noodles");
	}
	String spicy = sc.nextLine();
	else if(noodles.equals("no")){
		System.out.println("do you like pizza");
	}
	}
}