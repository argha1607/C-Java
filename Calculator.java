import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner Java = new Scanner(System.in);
        System.out.println("Enter two numbers to calculate: ");
        int a = Java.nextInt();
        int b = Java.nextInt();
        System.out.println(" 1 for addition:\n 2 for substraction :\n 3 for multiplication :\n 4 for division :\n 5 for modulus :\n");
        System.out.println("Enter any number to select Operation: ");
        int button = Java.nextInt();
        int sum, sub, mul, div, rem;
        sum = a + b;
        sub = a - b;
        mul = a * b;
        div = a / b;
        rem = a % b;

        switch(button) {
            case 1 : System.out.println("Result is : " +sum);
            break;

            case 2 : System.out.println("Result is : " +sub);
            break;

            case 3 : System.out.println("Result is : " +mul);
            break;

            case 4 : System.out.println("Result is : " +div);
            break;

            case 5 : System.out.println("Result is : " +rem);
            break;
        }
    }
}
