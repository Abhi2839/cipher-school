// Create a Student class with the following attributes:
// name (String)
// rollNumber (int)
// marks (float)

// The class should include:

// 1. A constructor to initialize all the fields.
// 2. A method to display student details.
// 3. Overload a method called updateMarks to update marks in two ways:
// - By providing the new marks as a float value.
// - By providing the percentage increase in marks (as a float).

// Also, create a main method to:
// 1. Input details of a student.
// 2. Update marks using both methods.
// 3. Display the updated details.

// Example Input and Output:

// Enter student details:
// Name: John
// Roll Number: 101
// Marks: 85.5

// Update marks:
// New Marks: 90.5
// Updated Details: Name: John, Roll Number: 101, Marks: 90.5

// Update marks by percentage increase:
// Percentage: 10
// Updated Details: Name: John, Roll Number: 101, Marks: 99.55
import java.util.Scanner;

public class ten {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       String s=sc.next();
       int rollno=sc.nextInt();
       double marks=sc.nextDouble(); 
       std stds=new std(s, rollno, marks);
     stds.display();
//      stds.update_marks(78.3);
// stds.display();
stds.update_marks_by_percentage(10);
    
    stds.display();
}
}

class std{
    String name;
    int rollnum;
    double marks;
    std(String n,int a,double b){
name=n;
rollnum=a;
marks=b;
    }
    void display(){
        System.out.println("Name: "+name);
        System.out.println("Roll no "+rollnum);
        System.out.println("Marks "+marks);
    }
    void update_marks(double n){
marks=n;
System.out.println("New marks "+marks);
    }
    void update_marks_by_percentage(double p){
    marks+=marks*(p/100.0);
    System.out.println("Updated marks "+marks);
    }
}