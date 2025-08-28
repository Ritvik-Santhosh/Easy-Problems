#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"The First 10 natural numbers are : ";
   cin>>number;
    for( int i=1; i<=number; i++)
    {
        cout<<i<<" ";
        sum +=i;
    }
    cout<<"The first 10 natural number: "<<number<<"The sum of the numbers is: "<<sum;
}