package edu.chitkara.training.java.core.corejava.basics;

public class TestEmployee {
    public static void main(String[] args) {
        Employee e1 = new Employee(10, 20);
        e1.show();
        Employee e2 = new Employee(30, 40);
        e2.show();
        Employee e3 = new Employee(50, 60);
        e3.show();
        Employee.showstatic();
    }
}