#include <iostream>
#include<string.h>
using namespace std;
class Mystring{
    char *str;
    public:
        Mystring(const char *s=""){
            str=new char[strlen(s)+1];
            strcpy(str,s);
        }
        void display(){cout<<str;}
        ~Mystring(){delete[] str;}
};
int main(){
    Mystring s1("Hello");
    Mystring s2("World");
    s1.display();
    s2.display();
    return 0;
}