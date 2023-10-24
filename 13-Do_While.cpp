#include <iostream>

using namespace std;

int main(){

    string paswd = "1234";
    string enter_paswd;

    do{   // do ile kod bloğuna girip daha sonra koşula bakılıyor.sadece while'da koşul doğru ise kod bloğuna giriliyor.
        cout << "enter your password : ";
        cin >> enter_paswd;
    } while(paswd != enter_paswd);

    cout << "Welcome to C++";

}
