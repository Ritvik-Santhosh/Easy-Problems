#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int base,expo,result;
    cout<<"Enter the base value : ";
    cin>>base;
    cout<<"Enter the exponent value: ";
    cin>>expo;
    result = pow(base,expo);
    cout<<base<< "^" <<expo<<"=" <<result;

}