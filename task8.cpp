#include <iostream>
#include <cmath>
using namespace std;


float checkBudget( float budget, int people ,string category);




main()
{

 float budget;
 int people;
 string category;


 cout << "Enter budget: ";
 cin >> budget;

 cout << "Enter catogary: ";
 cin >> category;

 cout << "Enter number of people: ";
 cin >> people;


 float remainingBudget = checkBudget( budget, people ,category);
 float ticketPriceN = people * 249.99;
 float ticketPriceV = people * 499.99;
 float final = ticketPriceN + remainingBudget;
 float final2 = ticketPriceV + remainingBudget;

 if (category == "normal" &&  final < budget )
 {
    float result = budget - final ;
    cout << "Yes! You have " << result << " QR left";
 }
 
  else if (category == "normal" &&  final > budget )
 {
    float result = final - budget  ;
    cout << "Not enough money! You need " << result;
 }

 else if (category == "vip" &&  final2 < budget )
  { 
    float result = budget - final2;
    cout << "Yes! You have " << result << " QR left";
  }

 else if (category == "vip" &&  final2 > budget )
  { 
    float result =  final2 - budget ;
    cout << "Not enough money! You need " << result;
  }

}





float checkBudget( float budget, int people ,string category)
{
 
   float price;

   if (people <=4)
   {
    
    price = budget * 0.75;
    
   }
     
    else if (people >=5 && people<=9)
   {
    
    price = budget * 0.60;
    
   }

   else if (people >=10 && people <=24)
   {
    
    price = budget * 0.50;
   
   }

   
   else if (people >=25 && people <=49)
   {
    
    price = budget * 0.40;
   
   }

   else if (people >=50)
   {
    
    price = budget * 0.25;
   
   }

    return price;
 

}