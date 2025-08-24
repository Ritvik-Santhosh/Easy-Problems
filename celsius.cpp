#include<iostream>
using namespace std;
int main()
{
    float celsicus,fahrenheit;
    cout<<"Enter the temperature:";
    cin>>celsicus;
    fahrenheit= (celsicus * 9.0/5.0)+32;
    cout<<"The tempereature in fahrenheit "<<fahrenheit;
    return 0;


}