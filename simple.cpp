#include<iostream>
using namespace std;    //i=pxrxt
int main()
{
   float p,r,t,si;
   cout<<"Enter the principal value:";
   cin>>p;
   cout<<"Enter the annual rate value:";
   cin>>r;
   cout<<"Enter the time: ";
   cin>>t;
   si=(p*r*t/100);

   cout<<"the simple intrest is: "<<si;
   return 0;


}