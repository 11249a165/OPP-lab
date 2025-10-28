#include <iostream>
using namespace std;
class Demo
{
    int x;
    public:
    Demo(){
        x=0;
        cout<<"Default counstrctor"<<endl;
    }
    Demo(int value){
        x=value;
    }
    Demo(const Demo &d){
        x=d.x;
        cout<<"copy constructor";
    }
    ~Demo(){
        cout<<"Destructor called";
    }
    void show(){
        cout<<"vlaue:"<<x<<endl;
    }
};
int main(){
    Demo d1,d2(100),d3=d2;
    d1.show();
    d2.show();
    d3.show();
    return 0;
}