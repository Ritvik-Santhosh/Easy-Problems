#include<iostream>
using namespace std;    
int main()
{
   
   int year;
   cout<<"Enter a year: ";
   cin>>year;
   if(year % 400 ==0 || (year % 4 == 0 && year % 100!=0))
  {
     cout<<year<< "It is Leap year";
  }
     else{
   cout<<"It is not a leap year";
   }
   return 0; 
}
