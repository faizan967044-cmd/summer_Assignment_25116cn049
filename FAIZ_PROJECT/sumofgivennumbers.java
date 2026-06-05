import java.util.Scanner;
public class sumofgivennumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a,b,c;
        System.out.println("Enter first numbers");
        a = sc.nextDouble();
        System.out.println("Enter second numbers");
        b = sc.nextDouble();
        System.out.println("Enter third numbers");
        c = sc.nextDouble();
        System.err.println(a+b+c);
    }
}