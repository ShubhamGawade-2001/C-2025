#include <stdio.h>

int main() {
    int N, sum=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    while (N!=0){
        sum +=N%10;
        N/=10;
    }

    printf("SUM OF digit  OF  %d is: %d\n", N, sum);
    return 0;
}
