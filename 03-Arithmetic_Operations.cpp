
#include <iostream> 
using namespace std;
int main(){
    int grade1 = 80;
    int grade2 = 50;
    float average;
    average = (grade1+grade2)/2;
    int sum = grade1+grade2;
    int sub = grade1-grade2;
    int div = grade1/grade2;

    float x = 65.50;
    int y = 13;
    float divide = x/y;

    int a = 40;
    int b = 7;
    float d = a/b;   // d float olsa da a ve b intiger olduğundan sonnuç int olur. float olması için değişkenlerden en az birinin float olması lazım.
    int z = a % b;
    a++;
    b--;

    cout << "Average : " << average << endl;
    cout << "Summition : "<< sum << endl;
    cout << "Substriction : "<< sub << endl;
    cout << "Divided intiger :" << div << endl;
    cout << "Divided float :" << divide << endl;
    cout << "Divided float :" << d << endl;
    cout << "Mod Operation :" << z << endl;
    cout << "a:" << a << endl << "b : " << b << endl;

}
