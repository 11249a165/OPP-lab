#include <iostream>
using namespace std;
class Temperature {
 float celsius;
public:
 void getData() {
 cout << "Enter temperature in Celsius: ";
 cin >> celsius;
 }
 void operator-() {
 float fahrenheit = (celsius * 9/5) + 32;
 cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
 }
};
int main() {
 Temperature t;
 t.getData();
 -t;
 return 0;
}
