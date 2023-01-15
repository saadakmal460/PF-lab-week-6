#include <iostream>
using namespace std;


char calculateGrade(int num);

main()
{
    
  int number;

  cout << "Enter number: ";
  cin >> number;

   

 char result = calculateGrade(number);
 cout << result;





} 



char calculateGrade(int num){
 
 char grade ;



if ( num < 50)
 {
    
 grade  = 'F';

 }

 else if (num >= 50 && num <=60)
 {
    
 grade  = 'E';

 }

 else if (num >= 61 && num <=70)
 {
    
 grade  = 'D';

 }


 else if (num >= 71 && num <=80)
 {
    
 grade  = 'C';

 }

   else if (num >= 81 && num <= 85)
 {
    
 grade  = 'B';

 }

 else if (num > 85)
 {
    
 grade  = 'A';

 }
 

 return grade;



}