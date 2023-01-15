#include <iostream>
using namespace std;



int isGreater(int n1 , int n2 , int n3);


main(){

   int num1 , num2 , num3 ;

   cout << "Enter first number: ";
   cin >> num1;

   cout << "Enter second number: ";
   cin >> num2;

   cout << "Enter third number: ";
   cin >> num3;

   int result = isGreater(num1 , num2 , num3);
   cout << result;

 if (result == 0)
 {
    cout << "Invalid input";
 }
 

}




int isGreater(int n1 , int n2 , int n3){

int greatest;

   if (n1 > n2 && n1 > n3)
   {
     greatest = n1;    
   }

   else if (n2 > n1 && n2 > n3)
   {
      greatest = n2;
   }
   
   else if (n3 > n2 && n3 > n1)
   { 
    greatest = n3;
   }

   else{
    cout << "Invalid input!";
   }
   
 return greatest;

}