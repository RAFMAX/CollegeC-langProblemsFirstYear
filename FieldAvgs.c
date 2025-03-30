#include <stdio.h>

 int main() {
    int n1,n2,A00,A10,A15,i;
    float Avg1,Avg2,Avg3;
    A00 = 0;
    A10 = 0;
    A15 = 0;
    do {
        scanf("%d", &n1);
    }   while (n1 > 100 && n1 <= 0);
    for (i = 1;i <= n1;i++) {
        do {
            scanf("%d", &n2);
        }   while(n2 > 20 && n2 < 0);
        if (n2 >= 0 && n2 < 10) {
            A00 = A00 + 1;
        }
        if (n2 >= 10 && n2 < 15) {
            A10 = A10 + 1;
        }
        if (n2 >= 15) {
            A15 = A15 + 1;
        }
    }
    Avg1 = ((float)A00/n1)*100;
    Avg2 = ((float)A10/n1)*100;
    Avg3 = ((float)A15/n1)*100;
    printf("Average of under 10 : %.2f\n",Avg1);
    printf("Average of more than 10 under 15 : %.2f\n",Avg2);
    printf("Average of more than 15 : %.2f\n",Avg3);

    int IN,B,C,I,D;
    D = 1;
    B = 1;
    scanf("%d", &IN);
    while (IN / 10 != 0) {
        B++;
        IN = IN / 10;
    }
    printf("%d", B);
    return 0;
 }