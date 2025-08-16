import java.util.Scanner;
public class seven{
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter the age: ");
            int age = sc.nextInt();
            if (age >= 18) {
                System.out.println("eligible");
            } else {
                System.out.println("not eligible");
            }
        }
    }
}
