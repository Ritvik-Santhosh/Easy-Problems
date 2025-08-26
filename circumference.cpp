#include<iostream>
using namespace std;
int main(){
    //area=pir2
    float circumference,radius;
    const float Pi=3.14;
    cout<<"Enter the values: ";
    cin>>radius;
    circumference=2 * Pi * radius;
    cout<<"The Circumference of the circle is: "<<circumference;
    return 0;
}