import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		System.out.print("I love to learn coding remotely.");
		Random rand = new Random();
		
		int x = rand.nextInt(46) + 5; // 0-45
								  //5-50
		//10 - 56
		// 65 - 10 = (56)
								// 0 - 55
								// 10 - 65
		System.out.print(x);
		
		double a;
		a = 0;
		a = rand.nextDouble(); // 0 - 1, not 1
		System.out.println(a);
								// 12.5 - 13.5 
		a = a + 12.5;
		System.out.print(a);
		
		double b;
		b = 0;
		b = rand.nextDouble();
		System.out.println(b);
								// 35.3 - 36.3
		b = b + 35.3;
		System.out.println(b);
		
		double c;
		c = rand.nextInt(200); //0 - 199
		System.out.print(c);
		c = c + 5;
		c = c + rand.nextDouble();
		System.out.println(c);
	}
	
}