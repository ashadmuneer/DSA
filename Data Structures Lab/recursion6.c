#include <stdio.h> 
void toh(int n,char a,char b,char c)
{
    if(n>0)
    {
        toh(n-1,a,c,b);
        printf("Move disk %d from %c to %c \n",n,a,c);
        toh(n-1,b,a,c);
    }
}

int main() 
{   
    toh(3,'A','B','C');
    return 0;
}