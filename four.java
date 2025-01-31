// Check Eligibility for Premium Membership

// Problem Statement:
// A company offers premium membership to customers based on the following criteria:

// The customer must be at least 18 years old.
// Their monthly income should be greater than or equal to ₹30,000.
// They should not have any pending dues.
// Write a program that uses relational, logical, and ternary operators to check if a customer is eligible for premium membership. Use appropriate keywords, identifiers, and access modifiers for the program.

// Requirements:
// Take the following inputs from the user:
// Age (integer)
// Monthly Income (double)
// Pending Dues (boolean: true if there are dues, otherwise false)
// Use a ternary operator to determine and display the customer's eligibility status.
// Ensure proper handling of variable declarations, data types, and access modifiers.

import java.util.Scanner;

public class four {
    public static void main(String[] abc) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        double b=sc.nextDouble();
        boolean c=sc.nextBoolean();
        // boolean c=true;
        String result = (a >= 18 && b >= 30000 && c!=true) ?"True":"False";
        if(result=="True")
        System.out.println("Eligibe for Premium Membership");
        else
        System.out.println("Not Eligibe for Premium Membership");
    }
}
