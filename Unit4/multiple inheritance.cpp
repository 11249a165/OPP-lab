#include <iostream>
using namespace std;
class Academic {
protected:
 int academicMarks;
public:
 void getAcademic() {
 cout << "Enter academic marks: ";
 cin >> academicMarks;
 }
};
class Sports {
protected:
 int sportsMarks;
public:
 void getSports() {
 cout << "Enter sports marks: ";
 cin >> sportsMarks;
 }
};
class Result : public Academic, public Sports {
public:
 void display() {
 int total = academicMarks + sportsMarks;
 float avg = total / 2.0;
 cout << "Total: " << total << ", Average: " << avg << endl;
 }
};
int main() {
 Result r;
 r.getAcademic();
 r.getSports();
 r.display();
}
