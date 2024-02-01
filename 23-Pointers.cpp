#include <iostream>

using namespace std;

int main(){

    int x = 8;
    int *ptr;  //ptr=4 gibi bir değer almaz.amaç,adres kullanarak değişkenlere ulaşmaktır.
    ptr = &x;  //&=aderess of x. pointer x'in adresine eşittir.

    cout << x << endl;
    cout << &x << endl;   //x'in adresi
    cout << ptr << endl;  //x'in adresi
    cout << *ptr << endl; //x'in adresinin içeriği (*=içerik)
    cout << &ptr << endl; //ptr nin adresi

    *ptr = 10;
    cout << *ptr << endl;
    cout << "----------" << endl;

    int arr[] = {20,54,15};
    cout << arr << endl;  // arrayin başlangıç adresini tutar.
    
    int *p;
    p = arr;  //p= adress of arr 

    cout << p << endl;
    cout << arr << endl;
    cout << *p << endl;
    cout << *(p+1) << endl; 
    cout << *(p+2) << endl;
    cout << "--------------"<< endl;
    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << p[2] << endl;

}
