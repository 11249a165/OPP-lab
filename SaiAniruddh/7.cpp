#include <iostream>
using namespace std;
class B;
class A{
    private:
       int num;
    public:
       void setData(){
        cout<<"Enter a number:";
        cin>>num;
       }
       friend class B;
};
class B{
    public:
    void  display(A obj){
        cout<<"The number entered is:"<<obj.num<<endl;
    }
};
int main(){
    A objA ;
    B objB ;
    objA.setData();
    objB.display(objA);
    return 0;
}