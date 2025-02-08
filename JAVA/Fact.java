import java.util.*;

public class Fact{
  public static int fact(int n){
  int f=1;{
  for(int i=1;i<=n;i++)
  f*=i;
  }
  return f;
  }


public static void main(String[] args){
Scanner scanner=new Scanner(System.in);
System.out.print("enter the number:");
int n=scanner.nextInt();
System.out.println("factorial of "+n+" is "+fact(n));
scanner.close();
}
}