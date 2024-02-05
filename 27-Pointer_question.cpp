#include <iostream>
using namespace std;
int main(){

    int x =5;
    int y =8;
    int *p1;
    int *p2;

    p1 = &x;
    p2 = &y;

    y = y+2;

    *p1 = *p1 * 2;
    *p1 = *p2 * *p1;
    cout << *p1 << endl;
    cout << x << endl;
    cout << y << endl;
    cout << *p2 << endl;

    cout << endl;
    return 0;

}