#include <iostream>
using namespace std;

//dinamik bellek yönetimi anlık ihtiyaçlar için bellekte yer ayırır.
int main(){

    int *p = new int;  //anlık bir integer'lık yer oluşturur.Dinamik bellek tahsisi.

    *p = 10;
    cout << *p << endl;
    delete p;

    cout << p << endl; // delete ettikten sonra farklı bir bellek tahsisi yapılır p'ye.
    cout << *p << endl; 

    cout << "----------------" << endl;

    string food = "pizza";
    string *ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;

    cout << "---------------"<< endl;

}