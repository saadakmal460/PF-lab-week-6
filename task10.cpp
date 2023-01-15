#include <iostream>
using namespace std;



string isGreatest(int number1 , int number2 , int number3);



main(){
    int num1 , num2 , num3;


    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Enter third number: ";
    cin >> num3;
        
    string result = isGreatest(num1 ,  num2 ,  num3);
    cout << result;

}




string isGreatest(int number1 , int number2 , int number3)
{
    string word;
    
    if (number1==number2 && number2 ==number3)
    {
        word = "Yes";
    }
    else
    {
        word = "No"; 
         
    }
    return word;
    
}