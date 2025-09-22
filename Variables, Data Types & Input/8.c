#include<stdio.h>

int main()
{
    
    int radius;
    double const  pi =3.14159; 
    printf("ENter your radius: ");
    scanf("\n %d",&radius);
    printf("\n circumference = %lf meters!",2*pi*radius);
    return 0;
}