#include <iostream>
using namespace std;


float checkCost(string city , string product , int quantity);




main()
{
   string city , product;
   int quantity;
   float result;


   cout << "Enter name of city: ";
   cin >> city;

   cout << "Enter name of product: ";
   cin >> product;

   cout << "Enter quantity: ";
   cin >> quantity;

   result = checkCost(city ,  product ,quantity);
   cout << result;

}





float checkCost(string city , string product , int quantity)
{
   float price;

   if (city == "sofia" )
   {
      if (product == "coffee")
      {
         price = quantity * 0.5;
      }

      else if (product == "water")
      {
         price = quantity * 0.8;
      }

      else if(product == "beer")
      {
         price = quantity * 1.20;
      }

      else if(product == "sweets")
      {
         price = quantity * 1.45;
      }

      else if(product == "peanuts")
      {
         price = quantity * 1.60;
      }
      
      
   }




   else if (city == "plovdiv" )
   {
      if (product == "coffee")
      {
         price = quantity * 0.4;
      }

      else if (product == "water")
      {
         price = quantity * 0.7;
      }

      else if(product == "beer")
      {
         price = quantity * 1.15;
      }

      else if(product == "sweets")
      {
         price = quantity * 1.30;
      }

      else if(product == "peanuts")
      {
         price = quantity * 1.50;
      }
      
      
   }

   else if (city == "varna" )
   {
      if (product == "coffee")
      {
         price = quantity * 0.45;
      }

      else if (product == "water")
      {
         price = quantity * 0.70;
      }

      else if(product == "beer")
      {
         price = quantity * 1.10;
      }

      else if(product == "sweets")
      {
         price = quantity * 1.35;
      }

      else if(product == "peanuts")
      {
         price = quantity * 1.55;
      }
      
      
   }




   else
   {

      price = 0;
   }
   
   
   return price;





}