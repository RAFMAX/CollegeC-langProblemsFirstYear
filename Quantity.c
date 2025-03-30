#include <stdio.h>

int main () {
    int Qty,P;
    do {
    scanf("%d", &Qty);    
    } while (Qty < 0);
    if (Qty < 10 ) {
        P = Qty * 10;
    }    
    else if (10 <= Qty && Qty < 100)
    {
        P = Qty * 9;
    }
    else {
        P = Qty * 8;
    }
    printf("%d",P);
    return 0;
}