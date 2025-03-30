#include <stdio.h>

int main() {
    int N,A,S;
    printf("write the number and the power :");
    scanf("%d%d", &A, &N);
    S = 1;
    for(int i = 1;i<=N;i++) {
        S = S*A;
    }
    printf("%d",S);
    return 0;
}