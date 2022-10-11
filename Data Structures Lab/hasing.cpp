#include<iostream>
using namespace std;
int DAT[10];
int main(){
    int n,d,l;
    cout<<"No of input"<<endl;
    cin>>n;
    cout<<"Enter the data and Location";
    while(n){ 
        cin>>d>>l;
        if(DAT[l]==0){
            DAT[l]=d;
            }
        else{
            int temp=l;
            while(DAT[temp]=!0){
                temp++;
                if(temp==10){
                    temp=0;
                }
                if(temp==l){
                    return -1;
                    }
                }
            DAT[temp]=d;
        }
        n--;
    }
    for(int i=0;i<10;i++){
        cout<<DAT[i]<<" "<<i<<endl;
    }
    return 0;
}