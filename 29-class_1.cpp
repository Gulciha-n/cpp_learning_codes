#include <iostream>
using namespace std;

class count{
    public:
        int width;
        int height;
        int area;
    
    void values(){
        cout << "Height : ";
        cin >> height;
        cout << "Width : ";
        cin >> width;
    }
    void areaCount(){
        area = height*width;
        cout << "Area : " << area;
    }
};

int main(){

    count count1;      //count class'ından count1 objesi ürettim
    count1.values();  //count1 objesi için values metodunu çalıştır.metodlar bir nesne üzerinden çağırılmalıdır.
    count1.areaCount();

}

