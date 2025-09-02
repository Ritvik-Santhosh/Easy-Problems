#include<iostream>
using namespace std;    
int main()
{
    int n, sum=0;
   cout<<"Enter the numbers  : ";
   cin>>n;
   for(int i=0;i<=n;i++)
   {
   sum +=i;
   }
   cout<<"The First n number of : "<<n << "natural numbeer of: "<<sum;
 return 0 ;

}