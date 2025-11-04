#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int age;
    public:
        Student(string n="",int a=0){
            name=n;
            age=a;
        } 
        Student operator=(const Student &s){
            if(this!=&s){
                name=s.name;
                age=s.age;
            }
            return *this;
        }
        void display(){
            cout<<"Name:"<<name<<"Age"<<age;
        }
};
int main(){
    Student s1("Alice",20);
    Student s2("Ravi",18);
    cout<<"Before overload";
    s1.display();
    s2.display();
    s2=s1;
    cout<<"\n After overload";
    s1.display();
    s2.display();
    return 0;
}