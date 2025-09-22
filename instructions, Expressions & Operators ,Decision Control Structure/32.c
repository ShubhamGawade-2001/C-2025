#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &N);
    sum = ((N+1 )/2)*((N+1)/2);

    printf("Sum of odd numbers from 1 to %d is: %d\n", N, sum);
    return 0;
}
