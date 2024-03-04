#include<iostream>
#include<math.h>
using namespace std;

int arm(int a,int b)
{
    int i=0;
    double j=0;
    for(int f=1;f<=b;f++)
    {
        i=a%10;
        j=pow(i,b)+j;
        a=a/10;
        i=0;
    }
    cout<<"Armstrong number : "<<j<<endl;
    return j;
}

int main()
{
    cout<<"Enter a number : ";
    int a;
    cin>>a;
    int b=to_string(a).length();
    int g=arm(a,b);
    if(g==a)
    {
        cout<<"Number is Armstrong.";
    }
    else
    {
         cout<<"Number is not Armstrong.";
    }
       
}