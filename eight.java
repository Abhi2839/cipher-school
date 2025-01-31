// Write a program that reverses the digits of a given integer. The program should handle negative integers correctly and return the reversed integer. If the reversed integer overflows the 32-bit signed integer range, return 0.

// Input: N = 123

// Output: 321

// Input 2: N = -456

// Output 2: -654

import java.util.Scanner;

public class eight {
    public static int reverse(int a){
        int reversed = 0;
        while (a != 0) {
        int b=a%10;
        reversed=reversed*10+b;
        a=a/10;
        }
        return reversed;
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        if (n>0){
            System.out.println(reverse(n));

        }
        else{
            System.out.println("-"+reverse(-n));
        }
    }
}
