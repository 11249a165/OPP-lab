#include<iostream>
using namespace std;
class Calculator{
    public:
    void add(int a ,int b){
        cout<<"Sum:"<<a+b<<endl;
    }
    void add(double a,double b){
        cout<<"sum:"<<a+b<<endl;
    }
    void add(int x, int y,int z){
        cout<<"sum:"<<x+y+z<<endl;
    }
};
int main()
{
    Calculator calc;
    calc.add(54,4);
    calc.add(99,24);
    calc.add(24,50,72);
    return 0;    
}