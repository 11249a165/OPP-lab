#include<iostream>
using namespace std;
class student{
  int roll;
  string name;
  public:
   void getData(){
    cout<<"Enter roll no & name:";
    cin>>roll>>name;
   }
   void display(){
    cout<<"Roll:"<<roll<<"Name"<<name;
   }
};
int main(){
    student s[5];
    for(int i=0;i<5;i++)
      s[i].getData();
    for(int i=0;i<5;i++)
      s[i].display();
    return 0;
}