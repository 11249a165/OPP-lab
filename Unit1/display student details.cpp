#include <iostream>
using namespace std;
class Student {
public:
 string name;
 int rollNo;
 float marks;
 void display() {
 cout << "Name: " << name
 << ", Roll No: " << rollNo
 << ", Marks: " << marks << endl;
 }
};
int main() {
 Student s1, s2, s3;
 s1.name = "Raj"; s1.rollNo = 101; s1.marks = 85.5;
 s2.name = "Divya"; s2.rollNo = 102; s2.marks = 90.0;
 s3.name = "Kumar"; s3.rollNo = 103; s3.marks = 78.2;
 s1.display();
 s2.display();
 s3.display();
 return 0;
}
