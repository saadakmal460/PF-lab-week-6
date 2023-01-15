#include <iostream>
using namespace std;



float discount(float purchase , string day , string month);



main(){

float amount;
string day , month;



cout << "Enter purchase amount: ";
cin >> amount;

cout << "Enter day: ";
cin >> day;


cout << "Enter month: ";
cin >> month;



float total = discount(amount ,  day ,  month);
cout << "Final price is: " << total;


}





float discount(float purchase , string day , string month){

  float discountAmount;
  float payable; 

 if(day == "sunday" && (month == "october" || month == "august" || month == "march"))
 {
   
    discountAmount = (purchase * 10)/100;
    payable = purchase - discountAmount; 

}
 
 else if(day == "monday" && (month == "november" || month == "december"))
 {
    
    discountAmount = (purchase * 5)/100;
    payable = purchase - discountAmount; 
 }

else{

   payable = purchase;   

}



 return payable;







}