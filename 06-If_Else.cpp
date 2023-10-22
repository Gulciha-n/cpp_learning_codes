#include <iostream> 

using namespace std;

int main(){  

    int pswd;
    cout << "Please create a password : ";
    cin >> pswd ;
    cout << "Your password is valid.." << endl;

    int try_pswd;
    cout << "please enter your password : ";
    cin >> try_pswd;

    if (pswd == try_pswd){
        cout << "your password is true!"<<endl;
    }
    else{
        cout << "your password is wrong"<<endl;
    }
    return 0; 

}
