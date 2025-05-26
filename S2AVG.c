#include <stdio.h>
#include <stdlib.h>

int main(){
    float T[7] = {18.35,6,1.7,15.35,12.08,12.35,14.83};
    printf("Algo,Archi,Anal,Alg,Log,Proba,TCE:\n");
    for(int i = 0;i<6;i++){
        printf("%d,", T[i]);
    }
    printf("%d", T[6]);
    float Avg = (float)(T[0]*4+T[1]*4+T[2]*3+T[3]*3+T[4]*3+T[5]*2+T[6]*1)/20;
    printf("\n%.2f\n", Avg);
    float Avg2 = (Avg + 14)/2;
    printf("%.2f\n", Avg2);
}