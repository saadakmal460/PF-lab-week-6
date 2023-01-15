#include <iostream>
#include <cmath>
using namespace std;




float volleyball(int holidays ,int weekends );



main()
{
  int holidays , weekends; 
  string year;


 cout << "Year is leap or not? ";
 cin >> year;

 cout << "Enter number of hoidays: ";
 cin >> holidays;

 cout << "Enter number of weekends in which he travels to hometown: ";
 cin >> weekends;

 float result =  volleyball(holidays , weekends );
 
 if (year == "leap")
 {
    float playNormal = result * 0.15;
    float final = playNormal + result;
    int roundedoff = floor(final);
    cout << roundedoff;
    
 }
 else
 {
    int roundedoff = floor(result);
    cout << roundedoff;
 }




}



float volleyball(int holidays ,int weekends )
{
    
    float play =   (holidays * 0.67);
    float days = 36 + play ;
    return days;
     


}