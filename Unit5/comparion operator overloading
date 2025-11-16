#include <iostream>
using namespace std;
class Rectangle {
 int length, breadth;
public:
 void getData() {
 cout << "Enter length and breadth: ";
 cin >> length >> breadth;
 }
 int area() {
 return length * breadth;
 }
 bool operator>(Rectangle r) {
 return this->area() > r.area();
 }
};
int main() {
 Rectangle r1, r2;
 r1.getData();
 r2.getData();
 if (r1 > r2)
 cout << "Rectangle 1 is larger" << endl;
 else
 cout << "Rectangle 2 is larger" << endl;
 return 0;
}
