//1. Write a program in java which will accept a list of n numbers through command line arguments, now sort them in ascending/ descending order and display the resultant list.
import java.util.Arrays;
import java.util.Collections;
public class SortNumbers {
    public static void main(String[] args) {
        if (args.length < 2) {
            System.out.println("Please provide a sorting order (asc/desc) followed by a list of numbers.");
            return;
        }
	String order = args[0];
	Integer[] numbers = new Integer[args.length - 1];
        try {
            for (int i = 1; i < args.length; i++) {
                numbers[i - 1] = Integer.parseInt(args[i]);
            }
        } catch (NumberFormatException e) {
            System.out.println("Please provide valid integers.");
            return;
        }
	if (order.equalsIgnoreCase("asc")) {
            Arrays.sort(numbers);
            System.out.println("Sorted in ascending order: " + Arrays.toString(numbers));
        } else if (order.equalsIgnoreCase("desc")) {
            Arrays.sort(numbers, Collections.reverseOrder());
            System.out.println("Sorted in descending order: " + Arrays.toString(numbers));
        } else {
            System.out.println("Invalid sorting order. Please use 'asc' for ascending or 'desc' for descending.");
        }
    }
}
