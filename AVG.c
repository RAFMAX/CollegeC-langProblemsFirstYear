#include <stdio.h>
#include <stdlib.h>

int AVG (int *T,int N){
    int A,a;
    a = 0;
    A = 0;
    for(int i=0; i < N;i++){
        A = *(T+i) + A;
        a++;
    }
    if (a != 0) {
        A = A/a;
    }
    return A;
}

int main(){
    int T[100];
    int N;
    printf("give N : ");
    scanf("%d", &N);
    for(int i = 0;i<N;i++){
        scanf("%d",&T[i]);
    }
    printf("%d", AVG(T, N));
}