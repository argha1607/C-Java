import java.util.Scanner;

public class button_SwitchCase {
    public static void main(String[] args) {
        System.out.println("Enter any button: ");
        Scanner Java = new Scanner(System.in);
        int button = Java.nextInt();

        switch(button) {
            case 1 : System.out.println("Hello !");
            break;

            case 2 : System.out.println("Namaste !");
            break;

            case 3 : System.out.println("Bonjour !");
            break;

            default : System.out.println("Invalid Button, Please try again !!");
        }
    }
}
