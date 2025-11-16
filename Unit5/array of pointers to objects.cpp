#include <iostream>
using namespace std;
class Student {
 int roll;
 string name;
public:
 void getData() {
 cout << "Enter Roll and Name: ";
 cin >> roll >> name;
 }
 void showData() {
 cout << "Roll: " << roll << ", Name: " << name << endl;
 }
};
int main() {
 int n;
 cout << "Enter number of students: ";
 cin >> n;
 Student *s[n];
 for (int i = 0; i < n; i++) {
 s[i] = new Student;
 s[i]->getData();
 }
 cout << "\nStudent Details:\n";
 for (int i = 0; i < n; i++) {
 s[i]->showData();
 delete s[i];
 }
}
