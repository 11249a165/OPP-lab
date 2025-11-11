#include <iostream>
using namespace std;
class person{
    protected:
        string name;
        int age;
    public:
        void getData(){
            cout<<"Enter name and age";
            cin>>name>>age;
        }
        void display(){
            cout<<"Name"<<name<<"Age"<<age;
        }
};
class Teacher:public person {
    string subject;
    float salary;
    public:
        void getTeacherData(){
            getData();
            cout<<"Enter subject and salary";
            cin>>subject>>salary;
        }
        void displayTeacher(){
            display();
            cout<<"subject:"<<subject<<"salary"<<salary;
        }
};
int main(){
    Teacher t;
    t.getTeacherData();
    t.displayTeacher();
    return 0;
}