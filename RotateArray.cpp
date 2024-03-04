#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout<<"Enter the number of elements : ";
    int a;
    cin>>a;
    int arr[a];
    cout<<"Enter the elements : ";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number for rotation : ";
    int b;
    cin>>b;
    int arr2[a];
    int temp=0;
    for(int i=b;i<a;i++)
    {
        arr2[temp]=arr[i];
        temp++;
    }

    for(int i=0;i<b;i++)
    {
        arr2[temp]=arr[i];
        temp++;
    }

    for(int i=0;i<a;i++)
    {
        cout<<arr2[i]<<" ";
    }
}
