// Program to find which element is repeated in the array and which is not
#include<iostream>
using namespace std;

int main()
{
    int a[100], flag[100], n;

    cout<<"Enter no of elements in an array : ";
    cin>>n;
    cout<<"Enter element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                sum = sum + 1;
        }
        if (sum > 1)
            flag[i] = 1;
        else
            flag[i] = 0;
    }

    //printing

    //repeating element

    cout<<"Repeated elements are :";
    for(int i=0;i<n;i++)
    {
        if(flag[i]==1)
        cout<<a[i];
    }
    cout<<"\nNon Repeated elements are : ";
    for(int i=0;i<n;i++)
    {
        if(flag[i]==0)
        cout<<a[i];
    }
    return 0;
}