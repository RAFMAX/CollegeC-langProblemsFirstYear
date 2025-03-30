#include <stdio.h>

int main() {
    float Tab[6];
    printf("Algorithm / Archi / Analysis / ISE / Algebra / TCE / BUR\n");
    for (int i = 0;i <= 6;i++) {
        scanf("%f", &Tab[i]);
    }
    float Avg = (float) (Tab[0]*5 + Tab[1]*4 + Tab[2]*3 + Tab[3]*3 + Tab[4]*3 + Tab[5] + Tab[6])/20;
    printf("%.2f", Avg);
}