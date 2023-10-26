#include <iostream>
using namespace std;

int main(){
    char letter;
    cout <<  "Enter one of the letters A,B,C : ";
    cin >> letter;

    switch (letter){
        case 'A':
        case 'a':
            cout << "The number you entered is A";
            break;
        case 'B':
        case 'b':
            cout << "The number you entered is B";
            break;
        case 'C':
        case 'c':
            cout << "The number you entered is C";
            break;
        default:
            cout << "Invalid letter!";
            break;
    }
    return 0;
}
