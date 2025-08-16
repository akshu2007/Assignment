import java.util.Scanner;
public class twenty {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter your choice (1: Tea, 2: Coffee, 3: Juice): ");
            int x = sc.nextInt();
            switch (x) {
                case 1 -> System.out.println("Tea");
                case 2 -> System.out.println("Coffee");
                case 3 -> System.out.println("Juice");
            }
        }
    }
}
