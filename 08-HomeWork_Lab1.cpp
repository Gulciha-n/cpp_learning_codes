#include <iostream>

using namespace std;

class CalcuClass {
public:
    int flag = 0;
    int Summation(int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    int Multiply(int arr[], int size) {
        int result = 1;
        for (int i = 0; i < size; i++) {
            result *= arr[i];
        }
        return result;
    }

    int Division(int arr[], int size) {
        
        int result = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                flag = -1;
                return 0;
            }
            result /= arr[i];
        }
        return result;
    }

    int Subtract(int arr[], int size) {
        int result = arr[0];
        for (int i = 1; i < size; i++) {
            result -= arr[i];
        }
        return result;
    }
};

int main() {
    CalcuClass calc;
    int choice, size;

    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];

    cout << "Enter " << size << " elements for the array:";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    while (true) { 
        cout << "=============================================" << endl;
        cout << "===============By Gülcihan Gülmez ================" << endl;
        cout << "~~ WELCOME to Data Structure Algorithms program ~~" << endl;
        cout << "Select and Enter Your Choice from the Menu __" << endl;
        cout << "1. + Summation" << endl;
        cout << "2. * Multiply" << endl;
        cout << "3. / Division" << endl;
        cout << "4. - Subtract" << endl;
        cout << "5. Exit" << endl;
        cout << "=============================================" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        int result;
        switch (choice) {
            case 1:
                result = calc.Summation(arr, size);
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = calc.Multiply(arr, size);
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = calc.Division(arr, size);
                if(calc.flag == -1){
                    cout << "Division by Zero Error \n";
                }
                else {
                    cout << "Result: " << result << endl;
                }
                break;
            case 4:
                result = calc.Subtract(arr, size);
                cout << "Result: " << result << endl; 
                break;
            case 5:
                cout << "Goodbye" << endl;
                exit(1);
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    delete[] arr; 

    return 0;
}

