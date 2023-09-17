import java.util.Scanner;

public class ifelse_voting 
{
    public static void main(String[] args)
    {
        int age, v_age = 18;
        System.out.println("Please enter your age: ");
        Scanner Java = new Scanner(System.in);
        age = Java.nextInt();
        if (age > v_age)
        {
            System.out.println("Eligible for voting.");
        }
        else{
            System.out.print("Not eligible for voting !");
        }
    } 
}
