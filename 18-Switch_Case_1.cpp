#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "please enter a number : " ;
    cin >> number ;

    switch (number)
    {
    case 1 :
        cout << "you chose 1";
        break;
    case 2 :
        cout << "you chose 2";
        break;
    case 3 :
        cout << "you chose 3";
        break;
    case 4 :
        cout << "you chose 4";
        break;
    case 5 :
        cout << "you chose 5";
        break;

    default:
        cout << "you did't enter between 1-5 !. Invalid value!";
        break;
    }
    return 0;
}



