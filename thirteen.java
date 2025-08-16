import java.util.Scanner;

public class thirteen {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int a, b, c, x;
            System.out.print("Enter first number: ");
            a = sc.nextInt();
            System.out.print("Enter second number: ");
            b = sc.nextInt();
            System.out.print("Enter third number: ");
            c = sc.nextInt();
            if (a <= b && a <= c) {
                x = a;
            } else if (b <= a && b <= c) {
                x = b;
            } else {
                x = c;
            }
            System.out.println("Smallest number is: " + x);
        }
    }
}
