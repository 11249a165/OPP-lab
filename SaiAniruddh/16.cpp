#include<iostream>
using namespace std;
class Academic{
    protected:
        int academicMarks;
    public:
        void getAcademic(){
            cout<<"Enter academic marks";
            cin>>academicMarks;
        }
};
class sports{
    protected:
        int sportMarks;
    public:
         void getSports(){
            cout<<"Enter sports marks";
            cin>>sportMarks;
         }
};
class Result:public Academic,public sports{
    public:
        void dispalay(){
            int total=academicMarks+sportMarks;
            float avg=total/2.0;
            cout<<"\nTotal"<<total<<"\nAverage"<<avg;
        }
};
int main(){
    Result r;
    r.getAcademic();
    r.getSports();
    r.dispalay();
    return 0;
}