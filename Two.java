import java.util.Scanner;
public class Two {
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a letter: ");
            char x = sc.next().charAt(0);
            if (Character.isUpperCase(x)) {
                System.out.println("uppercase");
            } else {
                System.out.println("not uppercase");
            }
        }
    }
}