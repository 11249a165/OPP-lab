#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int marks;
    public:
        Student(string n="",int m=0){
            name=n;
            marks=m;
        }
        Student operator +(const Student s){
            Student temp;
            temp.name=name+"&"+s.name;
            temp.marks=marks+s.marks;
            return temp;
        }
        Student operator=(const Student &s){
            if(this!=&s){
                name=s.name;
                marks=s.marks;
            }
            return *this;
        }
        void display(){
            cout<<"\nname"<<name<<"Marks"<<marks;
        }
};
int main(){
    Student s1("priaya",85);
    Student s2("kiran",98);
    Student s3;
    cout<<"original students";
    s1.display();
    s2.display();
    s3=s1+s2;
    cout<<"\nAfter overloading";
    s3.display();
    Student s4;
    s4=s1;
    cout<<"\nAfter assignment(s4=s1):";
    s4.display();
    return 0;
}