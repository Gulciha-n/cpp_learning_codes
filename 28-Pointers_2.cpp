#include <iostream>
using namespace std;

void array(const int *ptr1,const int *ptr2){

    for ( ; ptr1 != ptr2 ; ptr1++){
        cout << "element : "<<  ptr1 << endl;
    }
}
int main(){
    
    int arr[]  = {10,20,30,40,50,60,70};

    array(arr+2,arr+5);
    return 0;

}