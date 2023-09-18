import java.util.Scanner;

public class button_ifelse {
    public static void main(String[] args){
        int button;
        System.out.println("Enter any button: ");
        Scanner Java = new Scanner(System.in);
        button = Java.nextInt();
        if (button == 1) {
            System.out.println("Hello Sir !");
        }
        else if (button == 2) {
            System.out.println("Good Morning !");
        }
        else if (button == 3) {
            System.out.println("Good Night !");
        }
        else {
            System.out.println("Invalid Button.");
        }
    }
}
