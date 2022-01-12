import java.util.Scanner;
import java.util.Random;

class starter {
   	public static void main(String args[]) {
		Random rand = new Random();
		int rand_num1 = rand.nextInt(10);
		new Random();
		int rand_num2 = rand.nextInt(99);
		new Random();
		double rand_num3 = rand.nextDouble()+2.5;
		new Random();
		double rand_num4 = rand.nexDouble()+14+rand.nextInt(575);
		int rand_num5 = rand.nextInt(15);
		System.out.println(rand_num1);
		System.out.println(rand_num2);
		System.out.println(rand_num3);
		System.out.println(rand_num4);
		System.out.println(rand_num5);
	}
}
