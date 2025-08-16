import java.util.Scanner;
public class one {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a number: ");
            double num = sc.nextDouble();
            if (num > 0) {
                System.out.println("positive");
            } if (num < 0) {
                System.out.println("negative");
            } 
            }
        }
    }

