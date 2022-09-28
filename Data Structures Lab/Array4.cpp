#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //Program for delete the given elements into an array.

    int a[]={3,2,6,4,7,5,7,9,4,5};
    int size=10;

    int index=5;
    


    cout<<"Enter index of element to be deleted (less than"<<size<<")";
    cin>>index;
    int deleted_element=a[index];
    for(int i=index;i<size-1;i++)
    {
        a[i]=a[i+1];
    }

    //print
    cout<<"Array after deletion : ";
    for (int i = 0; i < size-1; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<"\nDeleted Element:"<<deleted_element;

    return 0;
}
