// Write a Java program to calculate the grade of a student based on their marks using if-else conditional statements. The program should follow these criteria:

// Marks >= 90: Grade A
// Marks >= 80 and < 90: Grade B
// Marks >= 70 and < 80: Grade C
// Marks >= 60 and < 70: Grade D
// Marks < 60: Grade F
// The program should:

// Take the marks as input from the command line.
// Validate the input to ensure it is a positive integer between 0 and 100

import java.util.Scanner;

class one{
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int a=sc.nextInt();
    if (a>0 &&100>a){
        if (a>=90)
        System.out.println("Grade A");

       else if (a>= 80 && a< 90)
        System.out.println("Grade B");
       else if (a>= 70 && a< 80)
        System.out.println("Grade C");

       else if (a>= 60 && a< 70)
        System.out.println("Grade D");
        else
        System.out.println("Fail");
    }
    else{
        System.out.println("Enter valid marks b/w 0 and 100");
    }
}
}