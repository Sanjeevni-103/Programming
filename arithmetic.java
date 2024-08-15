import java.util.Scanner;
class arithmetic{
      public static void main(String args[]){
      int add,sub,mul,div;
      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      add=a+b;
      sub=a-b;
      mul=a*b;
      div=a/b;
      System.out.println("Addition of two number is:- "+add);
      System.out.println("Subtraction of two number is:- "+sub);
      System.out.println("Multiplication of two number is:- "+mul);
      System.out.println("Division of two number is:- "+div);
      }
}
