#include <stdio.h>

int main() {
    int N,numero,Null,Pos,Neg,NegSum,PosSum;
    do {
        printf("give N :");
        scanf("%d", &N);
    } while (N <= 0);
    Null = 0;
    Pos = 0;PosSum = 0;
    Neg = 0;NegSum = 0;
    for(int i = 1;i<=N;i++) {
        printf("give number : ");
        scanf("%d", &numero);
        if (numero == 0) {
            Null++; //number of zero numbers
        }
        else if (numero > 0) {
            Pos++;  //sum of positive nums and num of positive nums
            PosSum = PosSum + numero;
        }
        else if (numero < 0) {
            Neg++;  //sum of negative nums and num of positive nums
            NegSum = NegSum + numero;
        }
    }
    printf("number of null values is : %d\nnumber of negative values is : %d\nnumber of positive values is : %d\n",Null,Pos,Neg);
    printf("sum of pos numbers is : %d\nsum of neg numbers is : %d\n",PosSum,NegSum);
    return 0;
}