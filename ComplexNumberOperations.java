/* 2. Write a program in java which will accept two complex numbers as command line arguments and perform addition, subtraction, multiplication and division using the concept of Object passing and returning*/
class Complex {
    double real;
    double imaginary;
    Complex(double real, double imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }
    Complex add(Complex other) {
        return new Complex(this.real + other.real, this.imaginary + other.imaginary);
    }
    Complex subtract(Complex other) {
        return new Complex(this.real - other.real, this.imaginary - other.imaginary);
    }
    Complex multiply(Complex other) {
        double realPart = this.real * other.real - this.imaginary * other.imaginary;
        double imaginaryPart = this.real * other.imaginary + this.imaginary * other.real;
        return new Complex(realPart, imaginaryPart);
    }
    Complex divide(Complex other) {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        double realPart = (this.real * other.real + this.imaginary * other.imaginary) / denominator;
        double imaginaryPart = (this.imaginary * other.real - this.real * other.imaginary) / denominator;
        return new Complex(realPart, imaginaryPart);
    }
    @Override
    public String toString() {
        return this.real + " + " + this.imaginary + "i";
    }
}
public class ComplexNumberOperations {
    public static void main(String[] args) {
        if (args.length != 4) {
            System.out.println("Please provide two complex numbers in the form: real1 imaginary1 real2 imaginary2");
            return;
        }
        try {
            double real1 = Double.parseDouble(args[0]);
            double imaginary1 = Double.parseDouble(args[1]);
            double real2 = Double.parseDouble(args[2]);
            double imaginary2 = Double.parseDouble(args[3]);

            Complex c1 = new Complex(real1, imaginary1);
            Complex c2 = new Complex(real2, imaginary2);

            System.out.println("Sum: " + c1.add(c2));
            System.out.println("Difference: " + c1.subtract(c2));
            System.out.println("Product: " + c1.multiply(c2));
            System.out.println("Quotient: " + c1.divide(c2));
        } catch (NumberFormatException e) {
            System.out.println("Please provide valid numbers.");
        }
    }
}
