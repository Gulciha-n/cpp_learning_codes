#include <iostream>

using namespace std;

int main(){
    int i;
    for (i=0 ; i<= 20 ; i++){
        if (i==10)
            break;
        cout << i << endl;
    }
    

    int j;
    for (j=0 ; j<=15 ; j++){
        if (j==10) 
            continue;  //10'u yazdırmadan döngüye döner.
        cout << j << endl;
    }
}

