#include <stdio.h>

int main() {
    int n1,n2,min;
    printf("Enter a number s: ");
    scanf("\n %d", &n1);
    scanf("\n %d", &n2);
    min =(n1<n2)? n1 : n2;
    int i=2;

    while (1 || min==i){
        int n=min/i;
        if(n1 % n == 0 && n2 % n ==0){
            printf("LCM is = %d \n", n);  
            break;      
        }
        i++;
    } 

    return 0;
}
