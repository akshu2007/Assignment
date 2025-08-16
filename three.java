import java.util.Scanner;
public class three {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String password = "admin123";
            System.out.print("Enter password: ");
            String input = sc.next();
            if (password.equals(input)) {
                System.out.println("Welcome");
            } else {
                System.out.println("Invalid password");
            }
        }
    }
}
