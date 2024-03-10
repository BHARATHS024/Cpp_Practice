#include<iostream>
using namespace std;
void merge(int arr[],int arr2[],int a,int b)
{
    int c=a+b;
    int arr3[c];
    int f=0;
    for(int i=0;i<a;i++)
    {
        arr3[f]=arr[i];
        f++;

    }
    for(int i=0;i<=c-a;i++)
    {
        arr3[f]=arr2[i];
        f++;

    }
    cout<<"Merged Array : ";
    for(int i=0;i<c;i++)
    {
        cout<<arr3[i]<<" ";
    }
}

int main()
{
    cout<<"Size of Array 1 : ";
    int a;
    cin>>a;
    int arr[a];
    cout<<"Elements : ";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    cout<<"Size of Array 2 : ";
    int b;
    cin>>b;
    int arr2[b];
    cout<<"Elements : ";
    for(int i=0;i<b;i++)
    {
        cin>>arr2[i];
    }
    merge(arr,arr2,a,b);

}
