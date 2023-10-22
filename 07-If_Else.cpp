#include <iostream>
using namespace std;
int main (){

    int num1 , num2 , choice ,result ;
    result = -1;

    cout << "Please enter the first number : ";
    cin >> num1;
    cout << "Please enter the second number : ";
    cin >> num2;

    cout << "  1. + Addition" << endl;
    cout << "  2. * Multiplication" << endl;
    cout << "  3. / Division" << endl;
    cout << "  4. - Subtraction" << endl;
    cout << "  5. Exit" << endl;

    cout << "Select and Enter Your Choice  : ";
    cin >> choice ;


    if (choice == 1)
    {
        result = num1+num2;
    }
    else if (choice == 2)
    {
        result = num1*num2;
    }
    else if (choice == 3)
    {
        result = num1/num2;
    }
    else if (choice == 4)
    {
        result = num1-num2;
    }
    else 
    {
        cout << "Please enter a number between 1-4 " << endl;
    }
    

    if (result != -1){
        cout << "The answer is : " << result << endl;
    }
    
    return 0;

}