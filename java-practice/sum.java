import java.util.*;;

public class Sum {
    public static void main(String[] args) {
        sum();
        int ans = sum2();
        System.out.println(ans);

    }

    // return value
    static int sum2() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number:");
        int a = sc.nextInt();
        System.out.println("Enter the second number:");
        int b = sc.nextInt();
        return (a + b);
    }

    }

    static void sum() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number:");
        int a = sc.nextInt();
        System.out.println("Enter the second number:");
        int b = sc.nextInt();
        System.out.println("The sum of numbers is " + (a + b));
    }
}