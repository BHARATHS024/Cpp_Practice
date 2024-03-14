#include<iostream>
using namespace std;
void max(int arr[],int a)
{
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<a;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    for(int i=0;i<a;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min;
    
}
int main()
{
    cout<<"Array Size : ";
    int a;
    cin>>a;
    int arr[a];
    cout<<"Array elements : ";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    max(arr,a);
}
