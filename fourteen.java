import java.util.Scanner;

public class fourteen {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for (int i=1;n>=i;i++){
            if (i%15==0)
            System.out.println("FizzBuzz");
            else if (i%5==0)
            System.out.println("Buzz");
            else if (i%3==0)
            System.out.println("Fizz");
            else 
            System.out.println(i);
        }

    }
}
