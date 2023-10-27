#include <iostream>

using namespace std;

int main(){
    int arr[4];  //float array'ler de yapabiliriz.
    arr[0] = 20;
    arr[1] = 17;
    arr[2] = 50;
    arr[3] = 45;

    cout << arr[2] << endl;

    for (int i=0 ; i<=3 ; i++ ){
        cout << arr[i] << endl;

    }

    cout << endl;

    int arr2[] = {10,85,21,5};
    for (int j=0 ; j<=3 ; j++){
        cout << arr2[j] << endl;
    } 

}
