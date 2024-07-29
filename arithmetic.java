import java.util.Scanner;
class arithmetic{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter first number :- ");
		int a = sc.nextInt();
		System.out.print("Enter second number :- ");
		int b = sc.nextInt();
		int sum=a+b;
		int dif=a-b;
		int mul=a*b;
		int div=a/b;
		System.out.println("Sum of "+a+" and "+b+" is "+sum);
		System.out.println("Difference of "+a+" and "+b+" is "+dif);
		System.out.println("Product of "+a+" and "+b+" is "+mul);
		System.out.println("Division of "+a+" and "+b+" is "+div);
	}
}