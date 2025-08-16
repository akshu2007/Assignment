import java.util.Scanner;
public class eight {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter the first number: ");
            double num1 = sc.nextDouble();
            System.out.print("Enter the second number: ");
            double num2 = sc.nextDouble();
            if (num1 > num2) {
                System.out.println("The larger number is: " + num1);
            } else {
                System.out.println("The larger number is: " + num2);
            }
        } 
    }
}
