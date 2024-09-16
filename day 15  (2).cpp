#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float grade;

public:
    Student(string name, int rollNumber, float grade) {
        this->name = name; 
        this->rollNumber = rollNumber;
        this->grade = grade;
    }

    void displayDetails() {
        cout << "Student Name: " << this->name << endl;
        cout << "Roll Number: " << this->rollNumber << endl;
        cout << "Grade: " << this->grade << endl;
    }
};

int main() {

    Student student1("paras", 101, 88.5);
  
    student1.displayDetails();

    return 0;
}
