#include <iostream>
using namespace std;
class Base {
public:
 void show() { cout << "Base public function\n"; }
};
class PublicDerived : public Base {
public:
 void display() { show(); }
};
class PrivateDerived : private Base {
public:
 void display() { show(); } // accessible here
};
int main() {
 PublicDerived pub;
 PrivateDerived pri;
 pub.display(); // Works
 pri.display(); // Works
 // pub.show(); // Error
 // pri.show(); // Error
}
