#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;
    sumOfTwoNumbers = firstNumber + secondNumber;
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;   
    
    //FROM HERE ITS FRM ADITYA RAJ
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;
    diffOfTwoNumbers = firstNumber - secondNumber;
    cout << firstNumber << " - " <<  secondNumber << " = " << diffOfTwoNumbers;   
    //ADITYA RAJ'S edit is over till here only
    //Akshat's edit start
    cout<<"Enter Two integers for multiplication:";
    cin >>firstNumber>>secondNumber;
    cout<<"/n Product="<<firstNumber*secondNumber;
    //Akshat's edit ends here
    return 0;
}
