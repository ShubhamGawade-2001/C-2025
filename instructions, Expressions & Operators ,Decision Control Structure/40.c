#include<stdio.h>

int main()
{

    int n ;
     printf("Enter a number : ");
    scanf("\n %d", &n);
    int rem,res =0;
    int copy=n;
    while(copy!=0){
        rem=copy%10;
        res += rem*rem*rem;
        copy/=10;
    }
    if(res== n){
        printf("\n TRUE");
    }
    else{
        printf("\n FALSE");
    }
    return 0;
}