#include <iostream>

using namespace std;


int main(){
    int num1,num2,num3;
    int result;

    cout << "enter numbers : "<< endl;
    cin >> num1 >> num2 >> num3;
    cout << endl;

    if (num1 >= num2 && num1 >= num3){    // and = && , or = ||
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3){
        result = num2;
    }

    cout << "result : " << result << endl;
    return 0;

}

