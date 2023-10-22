#include <iostream> 

using namespace std;
int main (){
    cout << "Welcome to the our program!" << endl;

    int width , height , area;

    cout << "Please enter the width : ";
    cin >> width;
    cout << endl;

    cout << "Please enter the width : ";
    cin >> height;       // cin >> width >> height; => aynı anda iki değişkeni de alabiliriz.
    cout << endl;

    area  = width*height;
    cout << "Area of rectangle : " << area;


    }


