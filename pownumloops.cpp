#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int base,expo;
    cout<<"Enter the base value : ";
    cin>>base;
    cout<<"Enter the exponent value: ";
    cin>>expo;
   int result =1;
   for (int i=1; i<=expo;i++)
{
    result=result*base;
}
cout<<base<<"^" <<expo<<"="<<result;

}