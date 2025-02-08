import java.util.Scanner;

public class Multiplication {
    
    public void multable(int n) {
        for (int i = 1; i <= 10; i++) {
            System.out.println(n + " x " + i + " = " + (n * i));
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number: ");
        int n = scanner.nextInt();

        Multiplication table = new Multiplication();
        System.out.println("THE MULTIPLICATION TABLE OF " + n + ": ");
        table.multable(n);

        scanner.close();
    }
}
