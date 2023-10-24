#include <iostream>

using namespace std;

int main(){
    int index = 1;
    int max_num;
    cout << "enter a number : ";
    cin >> max_num;
      
    while(index<=max_num){
        if(index % 7 == 0){
            cout << index << ",";
        }
        index++;
    };
}
