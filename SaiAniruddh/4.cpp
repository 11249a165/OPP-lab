#include<iostream>
using namespace std;
class counter{
  static int count;
  public:
  counter(){
    count++;
  }
  static void showcount(){
    cout<<"Count:"<<count;
  }
};
int counter::count=0;
int main(){
 counter c1,c2,c3;
 counter::showcount();
 return 0;
}