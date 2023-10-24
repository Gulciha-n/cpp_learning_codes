#include <iostream>

using namespace std;

int main(){

    int factor = 1;
    int i;
    int number;
    cout << "please enter a number : ";
    cin >> number;

    for (i=1 ; i<=number ; i++){
        factor = factor * i;
    }
    cout << factor;


    //ikinci yol
    for (i=number; i>0 ; i++){
        factor = factor*i;
    }
    cout << factor;


}