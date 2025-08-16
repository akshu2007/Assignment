import java.util.Scanner;
public class eighteen {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter (1-12): ");
            int x = sc.nextInt();
            switch (x) {
                case 1, 3, 5, 7, 8, 10, 12 -> System.out.println("Number of days: 31");
                case 4, 6, 9, 11 -> System.out.println("Number of days: 30");
                case 2 -> System.out.println("Number of days: 28 or 29");
            }
        }
    }
}
