#include <iostream>
using namespace std;
class BankAccount {
 int accNo;
 string name;
 float balance;
 static int count;
public:
 BankAccount() { accNo=0; name=""; balance=0; count++; }
 BankAccount(int a, string n, float b) {
 accNo=a; name=n; balance=b; count++;
 }
 void deposit(float amt) { balance += amt; }
 void withdraw(float amt) { balance -= amt; }
 void display() {
 cout<<"Acc No: "<<accNo<<", Name: "<<name
 <<", Balance: "<<balance<<endl;
 }
 static void showCount() {
 cout<<"Total Accounts: "<<count<<endl;
 }
};
int BankAccount::count=0;
int main() {
 BankAccount b1, b2(1001,"Arjun",25000.75), b3(1002,"Meena",40000.50);
 b1.deposit(5000);
 b1.display();
 b2.withdraw(2000);
 b2.display();
 b3.display();
 BankAccount::showCount();
 return 0;
}
