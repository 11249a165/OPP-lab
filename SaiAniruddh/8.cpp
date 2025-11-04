#include <iostream>
using namespace std;
class Number{
      int x;
    public:
      void getData(){
        cout<<"enter a number:";
        cin>>x;
      }
      void operator-(){
        x=-x;
      }
      void display(){
        cout<<"value:"<<x<<endl;
      }
};
int main(){
    Number n;
    n.getData();
    cout<<"Before overloading operator.";
    n.display();
    -n;
    cout<<"After overloading operator.";
    n.display();
    return 0;
}
