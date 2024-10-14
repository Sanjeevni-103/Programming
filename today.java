import java.util.Scanner;
class today{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the ending digit of the series :- ");
		int n = sc.nextInt();
		for(int i=1;i<=n;i++){
			if(i%2!=0){
				System.out.print(i);
				
			}
		}
		sc.close();
	}	
}
