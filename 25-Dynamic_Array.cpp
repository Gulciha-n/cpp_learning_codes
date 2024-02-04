#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "How many element will be in the array : ";
    cin >> x;
    int *p = new int[x];

    for (int i=0 ; i<x ; i++){
        cout << "Enter element : "<< endl;
        cin >> p[i] ;   //p[i] = p'nin işaret ettiği x tane element.
    }
    cout << endl;
    int sum=0;
    for (int i=0;i<x;i++){
        sum += p[i];
    }
    cout << "Sum of elements : " << sum;

}

// runtime int arr[x]; şeklinde tanımlayamayız.
// new operatörü kullanarak dinamik bellek tahsisi yapmalıyız.