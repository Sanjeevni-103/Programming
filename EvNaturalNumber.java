//Write a java program to find the sum of even natural numbers 
//taking last digit from user

import java.util.Scanner;
class EvNaturalNumber{
    public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the last digit: ");
    double lastDigit = sc.nextInt();
    double n = (lastDigit/4);
    double a = (2+lastDigit);
    double sum = n*a;
    System.out.println("sum of the even natural number is " +sum);
    }
}
