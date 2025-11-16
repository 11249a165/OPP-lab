#include <iostream>
using namespace std;
class Patient {
public:
 int patientID;
 string name;
 string disease;
 void setPatient(int id, string n, string d) {
 patientID = id;
 name = n;
 disease = d;
 }
 void showPatient();
};
void Patient::showPatient() {
 cout << "Patient ID: " << patientID
 << ", Name: " << name
 << ", Disease: " << disease << endl;
}
int main() {
 Patient p1, p2;
 p1.setPatient(301, "Arjun", "Fever");
 p2.setPatient(302, "Meena", "Diabetes");
 p1.showPatient();
 p2.showPatient();
 return 0;
}
