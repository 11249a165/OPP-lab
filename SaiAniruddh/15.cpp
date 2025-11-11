#include <iostream>
using namespace std;
class Employee{
    protected:
        string name;
        int id;
    public:
        void getEmployee(){
            cout<<"Enter employee name and id";
            cin>>name>>id;
        }
};
class Manager:public Employee{
    protected:
        string dept;
    public:
        void getManager(){
            getEmployee();
            cout<<"Enter department";
            cin>>dept;
        }
};
class Director:public Manager{
    protected:
        float salary;
    public:
        void getDirector(){
            getManager();
            cout<<"Enter salary";
            cin>>salary;
        }
        void display(){
            cout<<"\nName: "<<name<<"\nID: "<<id<<"\nDept:"<<dept<<"\nSalary:"<<salary;
        }
};
int main(){
    Director d;
    d.getDirector();
    d.display();
    return 0;
}