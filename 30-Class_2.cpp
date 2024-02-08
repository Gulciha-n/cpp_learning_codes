#include <iostream>
using namespace std;

class Fruit{
    public:
        string name; 
        string color ;
        int number;

        //başlangıç değeri atamak istersek bunu bir contstructor içinde yapmalıyız.
        //constructor class ile aynı isimde
        Fruit(): name("Cherry") , color("Red"){

        }
};
int main(){
    Fruit fruit1;
    fruit1.name = "banana";
    fruit1.color = "Gellow";
    fruit1.number = 20;
    
    Fruit fruit2;
    fruit2.name = "Apple";
    fruit2.color = "Green";
    fruit2.number = 15;


    cout <<  fruit1.name << fruit1.color << fruit1.number << endl;
    cout <<  fruit2.name << fruit2.color << fruit2.number << endl;

    return 0;
    
}

