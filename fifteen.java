import java.util.Scanner;
public class fifteen {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a character: ");
            char x = sc.next().charAt(0);
            if (Character.isLetter(x)) {
                System.out.println("It is an alphabet");
            } else if (Character.isDigit(x)) {
                System.out.println("It is a digit");
            } else {
                System.out.println("It is a special character");
            }
        }
    }
}
