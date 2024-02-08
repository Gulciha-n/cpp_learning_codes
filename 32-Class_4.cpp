#include <iostream>
using namespace std;

class Point{
    public:
    int x,y;

    void value(int x,int y){

    }
};

int main(){
    Point arr1[10];
    Point *arr2;     //arr2 = pointer ile oluşturulan array objesi
    arr2 = new Point[5]; //array objesi için dinamik bellek tahsisi

    for (int i = 0; i < 10; i++) {
        cout << "arr1[" << i << "]: (" << arr1[i].x << ", " << arr1[i].y << ")" << endl;
    }
    cout << "------------------"<< endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr2[" << i << "]: (" << arr2[i].x << ", " << arr2[i].y << ")" << endl;
    }

    delete[] arr2;

    return 0;

}

