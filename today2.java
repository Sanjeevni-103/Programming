import java.util.Scanner;
class today2{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number of terms :- ");
		int n = sc.nextInt();
		for(int i=1;i<=n;i++){
			int s=(4*i)-3;
			System.out.println(s);
		}
		sc.close();
	}
}
		
		