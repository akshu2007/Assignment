import java.util.Scanner;
public class nine {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a character: ");
            char x = sc.next().charAt(0);
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') 
            {
                System.out.println("Vowel");
            } else {
                System.out.println("Consonant");
            }
        }
    }
}