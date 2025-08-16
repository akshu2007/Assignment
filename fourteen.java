import java.util.Scanner;
public class fourteen {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a number: ");
            int num = sc.nextInt();
        if (num % 3 == 0 && num % 5 == 0) {
            System.out.println("divisible");
        } else {
            System.out.println("not divisible");
        }
    }
  }
}
