import java.util.Scanner;

public class PrimeCheck {
  
    public boolean isPrime(int num) {
        if (num <= 1) return false; 

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return false; 
            }
        }
        return true; 
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Creating an object to call the non-static method
        PrimeCheck obj = new PrimeCheck();

        if (obj.isPrime(number)) {
            System.out.println(number + " is a Prime Number.");
        } else {
            System.out.println(number + " is NOT a Prime Number.");
        }

        scanner.close();
    }
}
