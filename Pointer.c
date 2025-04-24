#include <stdio.h>
#include <stdlib.h>

int exchange(int *p,int *q){
    int *c;
    c = (int *)malloc(sizeof(int));
    *c = *p;
    *p = *q;
    *q = *c;
}

int main() {
    int x,y;
    printf("give x , y : ");
    scanf("%d%d",&x,&y);
    exchange(&x,&y);
    printf("x is :%d , y is :%d",x,y);
}
