#include <iostream> 
using namespace std; 
  
class Vehicle    //Base Class
{ 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
   
class Car: public Vehicle    //Derived class
{ 
}; 
  
int main() 
{    
    Car obj;  return 0;     //object of class car
} 
