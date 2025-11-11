#include <iostream>
#include<string>
using namespace std;
class Employee{
    protected:
        string name;
    public:
        Employee (const string &n=""): name(n){}
        virtual double claculateSalary(){return 0.0;}
        virtual void show(){
            cout<<"Employee"<<name<<"Salary"<<claculateSalary();
        }
        virtual ~Employee(){}
};
class FullTime:public Employee{
        double basic,bonus;
    public:
        FullTime(const string &n,double b,double bo):Employee(n),basic(b),bonus(bo){}
        double claculateSalary() override{
            return basic+bonus;
        }
        void show() override{
            cout<<'FullTime'<<name<<",Salary:"<<claculateSalary();
        }
};
class PartTime:public Employee{
        double hourlylate;
        int hours;
    public:
        PartTime(const string &n,double r,int n):Employee(n),hourlylate(r),hours(h){}
        double claculateSalary() override{
            return hourlylate*hours;
        }
        void show() override{
            cout<<"\nPartTime: "<<name<<"\nsalary: "<<claculateSalary();
        }
};
int main(){
    Employee *e1=new FullTime("Allice",40000,5000);
    Employee *e2=new PartTime("Bob",300.0,80);
    e1->show();
    e2->show();
    return 0;
}