#include <iostream>
using namespace std;
class Student {
 int m1, m2, m3;
public:
 void getMarks() {
 cout << "Enter marks in 3 subjects: ";
 cin >> m1 >> m2 >> m3;
 }
 friend class Result;
};
class Result {
public:
 void displayResult(Student s) {
 float avg = (s.m1 + s.m2 + s.m3) / 3.0;
 cout << "Average Marks: " << avg << endl;
 }
};
int main() {
 Student s;
 s.getMarks();
 Result r;
 r.displayResult(s);
 return 0;
}
