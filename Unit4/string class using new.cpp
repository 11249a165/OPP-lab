#include <iostream>
#include <cstring>
using namespace std;
class MyString {
 char *str;
public:
 MyString(const char *s = "") {
 str = new char[strlen(s) + 1];
 strcpy(str, s);
 }
 void display() { cout << str << endl; }
 ~MyString() { delete[] str; }
};
int main() {
 MyString s1("Hello");
 MyString s2("World");
 s1.display();
 s2.display();
}
