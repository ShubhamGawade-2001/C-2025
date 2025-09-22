#include<stdio.h>
int main()
{

    int year ;
    printf("Enter year = ");
    scanf("\n %d",&year);
    if((year%4==0 && year%100 !=0 ) || year%400==0)
    {
        printf("\n LEAP ");
    }
    else{
        printf("\n not LEAP");
    }

    return 0;
}