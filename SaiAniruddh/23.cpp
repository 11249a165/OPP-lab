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
    int n;
    cout<<"enter no.of studnets";
    cin>>n;
    Student *s[n];
    for(int i=0;i<n;i++){
        s[i]= new Student;
        s[i]->getData();
    }
    cout<<"\n student details";
    for(int i=0;i<n;i++){
        s[i]->showData();
        delete s[i];
    }
    return 0;
}