import java.util.Scanner;

public class thirteen {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        boolean ans=true;

        int i=0;
        int j=str.length()-1;
        while(j>i){
            if (str.charAt(i)!=str.charAt(j)){
                System.out.println("Not a palindrome");
                return;
            }
            j--;
            i++;
        }
        if (ans==true)
        System.out.println("palindrome");

  
    }
}
