#include<stdio.h>

int main()
{
    
    int n1=10;
    int n2 =20;
    
    printf("n1 = %d , n2 =%d ",n1,n2);
    int temp=n1;
    n1=n2;
    n2=temp;
    
    printf(" \n afeter swap n1 = %d , n2 =%d ",n1,n2);
    return 0;
}