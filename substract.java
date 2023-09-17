import java.util.Scanner;

class substract 
{
   public static void main(String[] args )
   {
      int a, b;
      System.out.println("Enter two numbers:");
      Scanner Argha = new Scanner(System.in);
      a = Argha.nextInt();
      b = Argha.nextInt();
      int sum = a - b;
      System.out.println("Result is :" + sum);
   }
}
