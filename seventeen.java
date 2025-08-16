import java.util.Scanner;
public class seventeen {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            double x, y;
            char op;
            System.out.print("Enter first number: ");
            x = sc.nextDouble();
            System.out.print("Enter second number: ");
            y = sc.nextDouble();
            System.out.print("Enter operation (+, -, *, /): ");
            op = sc.next().charAt(0);
            switch (op) {
                case '+' -> System.out.println("Result: " + (x + y));
                case '-' -> System.out.println("Result: " + (x - y));
                case '*' -> System.out.println("Result: " + (x * y));
                case '/' -> {
                    if (y != 0)
                        System.out.println("Result: " + (x / y));
                    else
                        System.out.println("Can't be divided by zero");
                }
            }
        }
    }
}
