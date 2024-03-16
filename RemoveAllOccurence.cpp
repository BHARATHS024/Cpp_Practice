//Optimized approach(in-place shifting)
#include<bits/stdc++.h>
using namespace std;
void rem(int arr[],int a,int c)
{
    int b=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]!=c)
        {
            arr[i-b]=arr[i];
        }
        else{
            b++;
        }
    }
    for(int i=0;i<a-b;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    int c;
    cin>>c;
    rem(arr,a,c);
    return 0;
}
