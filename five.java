import java.util.Scanner;
public class five {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter the marks: ");
            double marks = sc.nextDouble();
            if (marks >= 40) {
                System.out.println("Passed");
            } else {
                System.out.println("Failed");
            }
        }
    }
}