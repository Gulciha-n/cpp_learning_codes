#include <iostream> 

using namespace std;
int main(){
    string name = "Derya";
    int age = 20;
    age = 25;
    name =  "Pelin";
    char avr = 'A';  // ASCII'de her char değerinin bir karşılığı var => A = 65  A yerine 65 de yazabiliriz.
    float numerical_avr = 3.25;
    bool take_exam = true;  

    cout << "Name : " << name << endl << "Age : " << age << endl;
    cout << "Average of grades : " << avr << endl;
    cout << "Numerical Average of grades :" << numerical_avr << endl;
    cout << "Did the student take the exam? :" << take_exam << endl;
} 

