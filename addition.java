import java.util.Scanner;
class addition {
    public static  void main(String[] args)  
    {
        System.out.println("enter two numbers: ");
        Scanner s = new Scanner(System.in);
            int a = s.nextInt();
            int b = s.nextInt();
            int sum;
            sum = a + b;
            System.out.println("Result is: " + sum);
    } 
}