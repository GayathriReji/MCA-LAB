import java.util.Scanner;

public class Fibo {
  public static int fibo(int n) {
    if (n <= 1) {
      return n;
    }
    return fibo(n - 1) + fibo(n - 2);
  }

  public static void main(String[] args) { 
    Scanner scanner = new Scanner(System.in);
    System.out.print("  Enter the number: ");
    int n = scanner.nextInt();
    System.out.println("Fibonacci series up to " + n + " terms is: ");
    for (int i = 0; i < n; i++) {
      System.out.print(fibo(i) + " ");
    }
    scanner.close();
  }
}