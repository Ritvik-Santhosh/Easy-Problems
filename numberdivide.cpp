#include<iostream>
using namespace std;    
int main()
{
   float num;
   int number;
   cout<<"Enter a number: ";
   cin>>number;
   if(number% 5 ==0 && number % 11 ==0)
   cout<<"It is divisible";
   else{
   cout<<"It is not divisble";
   }
   return 0; 
}
