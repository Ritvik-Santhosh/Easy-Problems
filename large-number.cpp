#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the number: ";
    cin>>num1;
    cin>>num2;
    if(num1>num2)
    cout<<"It is greater: " <<num1;
    else if(num2>num1)
    cout<<"It is greater: " <<num2;
    else
    cout<<"The values are same: ";
    return 0;
}