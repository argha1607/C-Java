import java.util.Scanner;
public class Hello_user {
    public static void main(String[] args)
    {
        System.out.println("Please enter your name:");
        Scanner Java = new Scanner(System.in);
        String a  = Java.nextLine();
        System.out.print("Hello " + a); 
    }
}
