#include<iostream>
using namespace std;
int DAT[101];
int fib(int n){
    if(n==1 || n==2){
        return DAT[n]=n-1;
    }
    else{ 
        if(DAT[n]==0){
        DAT[n]=(fib(n-1)+fib(n-2));
        }
        
    }
    return DAT[n];
}
int main(){
    for(int i=1;i<=100;i++){
        cout<<fib(i)<<" ";
    }
}