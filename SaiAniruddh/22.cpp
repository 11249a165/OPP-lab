#include <iostream>
using namespace std;
class Student{
    int roll;
    string name;
    public:
        void getData(){
            cout<<"Enter roll and name";
            cin>>roll>>name;
        }
        void showData(){
            cout<<"Roll:"<<roll<<"Name:"<<name;
        }
};
int main(){
    Student s1,*ptr;
    ptr=&s1;
    ptr->getData();
    ptr->showData();
    return 0;
}