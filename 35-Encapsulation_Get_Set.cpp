#include <iostream>
using namespace std;

class Employee{
    private:
        int salary;
    public:
        void setSalary(){
            salary=s;
        }
    int getSalary(){
        return salary;
    }
}

int main(){

    Employee myObj;
    myObj.setSalary(60000);
    cout << myObj.getSalary << endl;
    return 0;
    
    
}