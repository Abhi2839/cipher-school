import java.util.Scanner;

public class sixteen {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a=0,b=1;
        System.out.print(a+" "+b+" ");
        int sum=0;
        for(int i=1;i<n-1;i++){
            sum=a+b;
            a=b;
            b=sum;
            System.out.print(sum+" ");
        }
        // System.out.println(sum);
    }
}
