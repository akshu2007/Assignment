import java.util.Scanner;
public class nineteen {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter type of fuel (1: Petrol, 2: Diesel, 3: Electric): ");
            int x = sc.nextInt();
            switch (x) {
                case 1 -> System.out.println("Petrol");
                case 2 -> System.out.println("Diesel");
                case 3 -> System.out.println("Electric");
            }
        }
    }
}
