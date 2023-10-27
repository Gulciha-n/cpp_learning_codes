#include <iostream>

using namespace std;

int main(){
    int arr[2][3] = {{21,34,42} , 
                     {22,35,49}};

    cout << arr[0][2] << endl;
    cout << arr[1][2] << endl;

    for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<3 ; j++)
            cout << arr[i][j];
        cout << endl;
    }

}
