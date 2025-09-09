import java.util.Scanner;

// class stud{
//     public  static  void main(String args[]){
//         int num;
//         System.out.println("enter the roll  number");
//         Scanner sc=new Scanner(System.in);
//         num=sc.nextInt();
//         String name;
//         System.out.println("enter the name  ");
//         name=sc.next();
//         System.out.println("Hello "+name);
//         float marks;
//         System.out.println("enter the marks ");
//         marks=sc.nextFloat();
//         System.out.println("Entered marks "+marks);
//
//     } }
// class main{
//     int a,b;
//     Scanner sc=new Scanner(System.in);
//     System.out.println("Enter first number:")
//     a=sc.nextInt();
//     b=sc.nextInt();
// wap to accept two integers and demostratte relational operators
public class Main {
    public static void main(String[] args) {
        // String name = "tony stark";
        // int age = 48;
        // double price = 25.25;
        // int a = 25;
        // int b = 10;

        // b = 20;
        // name = "ironman";
        // int a = 10;
        // int b = 20;
        // int sum = a + b;
        // int diff = a - b;
        // System.out.println("Sum: " + sum);
        // System.out.println("Difference: " + diff);
        // int a = 10;
        // int b = 20;
        // int mul = a * b;
        // System.out.println(mul);
        // Scanner sc = new Scanner(System.in);
        // String name = sc.next();
        // System.out.println(name);
        // int a, b;
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter 1st number:");
        // a = sc.nextInt();
        // System.out.println("Eter second number:");
        // b = sc.nextInt();
        // System.out.println("Sum: " + (a + b));
        // }
        // Scanner sc = new Scanner(System.in);

        System.out.print("How many students? ");
        int count = sc.nextInt();
        sc.nextLine();

        // Arrays to store data
        int[] rollnos = new int[count];
        String[] names = new String[count];
        int[] marks = new int[count];

        // Input data
        for (int i = 0; i < count; i++) {
            System.out.println("\nStudent " + (i + 1) + ":");
            System.out.print("Enter roll number: ");
            rollnos[i] = sc.nextInt();
            sc.nextLine();

            System.out.print("Enter name: ");
            names[i] = sc.nextLine();

            System.out.print("Enter marks: ");
            marks[i] = sc.nextInt();
            sc.nextLine();
        }

        // Display table
        System.out.println("\n" + "=".repeat(50));
        System.out.printf("| %-10s | %-20s | %-10s |\n", "Roll No", "Name", "Marks");
        System.out.println("=".repeat(50));

        for (int i = 0; i < count; i++) {
            System.out.printf("| %-10d | %-20s | %-10d |\n", rollnos[i], names[i],
                    marks[i]);
        }
        System.out.println("=".repeat(50));
        sc.close();
        // System.out.println("Roll no |" + "\t Name\t\t|" + " Marks |");
        // System.out.println("-------------------------------------");
        // for (int i = 0; i < 3; i++) {
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter roll number:");
        // int rollno = sc.nextInt();
        // System.out.println("Enter name:");
        // String name = sc.next();
        // System.out.println("Enter marks:");
        // int marks = sc.nextInt();
        // System.out.println(rollno + "\t |" + "\t" + name + "\t\t|" + " " + marks + "
        // |");
        // System.out.println("-------------------------------------");
        // }
    }
}