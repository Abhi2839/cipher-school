import java.util.Scanner;

public class eighteen_leap_year {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    if( (n%400==0 || n%100!=0) && n%4==0)
System.out.println("Leap year");
else
System.out.println("Not a leap year");    
}
}
