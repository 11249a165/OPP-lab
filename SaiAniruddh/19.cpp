#include <iostream>
using namespace std;
class Base{
    public:
        void show(){cout<<"Base public function\n";}
};
class publicDerived: public Base{
    public:
        void display(){ show();}
};
class PrivateDerived: private Base{
    public:
        void display(){ show();} 
};
int main(){
    publicDerived pub;
    PrivateDerived pri;
    pub.display();
    pri.display();
    //pub.show();//Error
    //pri,show();//Error
    return 0;
}