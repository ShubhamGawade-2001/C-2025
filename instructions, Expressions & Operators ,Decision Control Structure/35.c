#include <stdio.h>

int main() {
    int n1,n2,max;
    printf("Enter a number s: ");
    scanf("\n %d", &n1);
    scanf("\n %d", &n2);
    max =(n1>n2)? n1 : n2;
    int i=1;

    while (1){
        if(max*i% n1 ==0 && max*i%n2 ==00){
            printf("LCM is = %d \n", max*i);  
            break;      
        }
        i++;
    } 

    return 0;
}
