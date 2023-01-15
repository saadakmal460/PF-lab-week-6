#include <iostream>
using namespace std;


float totalIncome(string screening , int rows , int colomns);





main()
{

 
 string screening;
 int rows , colomns;


 cout << "Enter type of screening: ";
 cin >> screening;

 cout << "Enter number of rows: ";
 cin >> rows;

 cout << "Enter number of colomns :";
 cin >> colomns;

 float result =  totalIncome(screening , rows ,colomns);
 cout << "Total income is: " << result;

}





float totalIncome(string screening , int rows , int colomns)
{
 
 float income;

 if (screening == "premiere")
 {
    income = rows * colomns * 12.00;
 }

 else if(screening == "normal")
 {
   income = rows * colomns * 7.50;
 } 


 else if (screening == "discount")
 {
    income = rows * colomns * 5.00;
 }

 else{
    income = 0;
 }
 
 return income;



}