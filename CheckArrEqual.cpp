#include <bits/stdc++.h>
using namespace std;
bool check(int arr1[],int arr2[],int a)
{
    sort(arr1,arr1+a);
    sort(arr2,arr2+a);
    bool res=true;

    for(int i=0;i<a;i++)
    {
            if(arr1[i]!=arr2[i])
            {
                res=false;
            }
    }
    return res;
}
int main()
{
    cout<<"Array Size : ";
    int a;
    cin>>a;
    int arr1[a];
    int arr2[a];
    cout<<"Array 1 Elements : ";
    for(int i=0;i<a;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Array 2 Elements : ";
    for(int i=0;i<a;i++)
    {
        cin>>arr2[i];
    }
    bool f=check(arr1,arr2,a);
    if(f==true)
    {
        cout<<"Arrays are Equal.";
    }
    else
    {
        cout<<"Arrays are not Equal.";
    }
}
