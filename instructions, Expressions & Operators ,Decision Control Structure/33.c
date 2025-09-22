#include <stdio.h>

int main() {
    int N, fact=1;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
          fact *=i;
    }

    printf("FACTORIAL OF  %d is: %d\n", N, fact);
    return 0;
}
