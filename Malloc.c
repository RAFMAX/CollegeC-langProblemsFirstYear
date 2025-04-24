#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, i;
    p =(int *)malloc(sizeof(int)*5);
    for (i=0;i<=4;i++){
        printf("give %d number", i+1);
        scanf("%d", (p+i));
    }
    for (i=0;i<=4;i++){
        printf("%d", *(p+i));
    }
}