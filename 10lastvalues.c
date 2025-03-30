#include <stdio.h>

int main ()  {
    int N;
    do {
        printf("give N > 10 N < 20 : ");
        scanf("%d", &N);
        if (N > 20) {
            printf("Erreur la valeur entrée est grande\n");
        }
        if (N < 10) {
            printf("Erreur la valeur entrée est petite\n");
        }
    } while (10 > N || N > 20);

    int i,x,M;
    scanf("%d", &x);
    M = x;
    for (i = 1;i <= 10;i++) {
        M = M - 1;
        printf("%d\n", M);
    }

    int S1,S3;
    scanf("%d", &S3);
    S1 = S3;
    do {
        S1 = S1 + S3;
    }   while (S1 < 100);
    S1 -= S3; 
    printf("%d", S1);
    return 0;
}