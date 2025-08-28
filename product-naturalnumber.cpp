#include<iostream>
using namespace std;
int main(){
    int number,pro=1;
    cout<<"The First 10 natural numbers are : ";
   cin>>number;
    for( int i=1; i<=number; i++)
    {
        cout<<i<<" ";
        pro *=i;
    }
    cout<<"The first 10 natural number: "<<number<<"The product of the numbers is: "<<pro;
}