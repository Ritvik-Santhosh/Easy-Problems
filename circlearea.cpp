#include<iostream>
using namespace std;
int main(){
    
    float area,radius;
    const float Pi=3.14;
    cout<<"Enter the values: ";
    cin>>radius;
    area=Pi * radius * radius;
    cout<<"The Area of the circle is: "<<area;
    return 0;
}