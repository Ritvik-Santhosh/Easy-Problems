#include<iostream>
using namespace std;    
int main()
{
    char name;
    cout<<"Enter a Character: ";
    cin>>name;
    if( name=='a'||name=='e'||name=='i'||name=='o'||name=='u'||name=='A'||name=='E'||name=='I'||name=='O'||name=='U')
    cout<<name<<" It is a vowel ";
    else{

    cout<<name<<" It is a consonent";
    }
    return 0;    

}
