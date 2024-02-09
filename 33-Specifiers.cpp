#include <iostream>
using namespace std;

class MyClass {
    //if you don't specify an access specifier,by default, all members of a class will be private
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};


int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  //myObj.y = 50;  // Not allowed (private)
  return 0;
}


/*
public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
*/

