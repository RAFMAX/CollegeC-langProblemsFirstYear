#include <stdio.h>

int main() {
    int Vals[100],a,i,N,min,max,prd;
    float avg;
    do { 
        printf("give N : ");
        scanf("%d", &N);
    } while (N>100);
    a = 0;prd = 1;avg = 0;
    for (i = 0;i < N;i++) {
        printf("give number value : ");
        scanf("%d", &Vals[i]);
        if (i == 0) {
            min = Vals[i];
            max = Vals[i];
        }
        if (Vals[i] < min) {
            min = Vals[i]; 
        }
        else if (Vals[i] > max) {
            max = Vals[i];
        }
        if (Vals[i] > 0) {
            prd = prd*Vals[i];
        }
        else if (Vals[i] < 0) {
            avg = avg + Vals[i];
            a++;
        }
    }
    if (a==0) {
        printf("there are zero negative numbers thus no average.\n");
    }
    else {
        avg = avg/a;    
        printf("average of negatives is %.2f\n", avg);
    }
    printf("product of positives is %d\nmax is %d\nmin is %d",prd,max,min);
    return 0;
}