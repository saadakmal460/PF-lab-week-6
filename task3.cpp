#include <iostream>
using namespace std;



string checkTitle(int age , char gender);



main(){

 int age;
 char gender;


 cout << "Enter age: ";
 cin >> age;

 cout << "Enter gender: ";
 cin >> gender;


 string result = checkTitle(age , gender);
 cout << result;



}





string checkTitle(int age , char gender)
{

 string title;


 if (age >= 16 && gender == 'm' )
 {
  
    title = "MR."; 
 }

  else if (age < 16 && gender == 'm' )
 {
  
    title = "Boy"; 
 }
 
 else if (age >= 16 && gender == 'f' )
 {
  
    title = "Ms."; 
 }

 else if (age < 16 && gender == 'f' )
 {
  
    title = "Girl"; 
 }

 else{
    title = "Invalid";
 }

return title;





}