//Write a Java program in which you have to take two numbers from user.If the sum of the numbers is even, then print your own name.If the sum of the number is odd, then print my name.

import java.util.Scanner;
class evod_name{
     public static void main(String args[]){
     Scanner sc= new Scanner(System.in);
     System.out.println("Enter the first number:-");
     int num1=sc.nextInt();
     System.out.println("Enter the second number:-");
     int num2=sc.nextInt();
     int num = num1+num2;
        if(num % 2==0){
            System.out.println("SANJEEVNI");
        }
        else{
            System.out.println("VANI");
        }
     }
}