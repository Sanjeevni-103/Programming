// Java Program to Print Upper Part of Mirror Upper Star
// Triangle Pattern

// Importing input output classes
import java.io.*;

// Main Class
class Pattern {

	// Method 1
	// To print upper part of the pattern
	private static void displayUpperPart(int size)
	{

		// Declaring variables for rows and columns
		// respectively
		int m, n;

		// Outer loop for rows
		for (m = size - 1; m >= 0; m--) {

			// Inner loop 1
			// to print triangle 1
			for (n = 0; n < m; n++) {

				// Printing whitespace
				System.out.print(" ");
			}

			// Inner loop 2
			// to print triangle 2
			for (n = m; n <= size - 1; n++) {

				// Printing star with whitespace
				System.out.print("*"
								+ " ");
			}

			// By now done with one row so next line
			System.out.println();
		}
	}

	// Method 2
	// Main driver method
	public static void main(String[] args)
	{
		// Declaring and initializing variables to
		// size of the triangle
		int size = 7;

		// Calling the above Method 1 to
		// print and display the upper part of triangle
		displayUpperPart(size);
	}
}
