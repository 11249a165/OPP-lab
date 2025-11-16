#include <iostream>
#include <string.h>
using namespace std;
class StringConcat {
 char str[50];
public:
 void getString() {
 cout << "Enter string: ";
 cin >> str;
 }
 StringConcat operator+(StringConcat s) {
 StringConcat temp;
 strcpy(temp.str, str);
 strcat(temp.str, s.str);
 return temp;
 }
 void display() {
 cout << "Resultant String: " << str << endl;
 }
};
int main() {
 StringConcat s1, s2, s3;
 s1.getString();
 s2.getString();
 s3 = s1 + s2;
 s3.display();
 return 0;
}
