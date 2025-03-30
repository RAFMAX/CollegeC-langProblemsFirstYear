#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Oui(char O) {
    if (O == 'O' || O == 'o') {
        return 1;
    } 
    else {
        return 0;
    }
}

void Multi(int F){
    for(int i = 1;i<=9;i++){
        printf("%d\n",i*F);
    }
}

int main() {
    char c;
    int N;
    printf("give Number:");
    scanf("%d", &N);
    Multi(N);
    printf("give O for yes N for no:");
    scanf(" %c", &c);
    while (Oui(c) == 1) {
        printf("give Number:");
        scanf("%d", &N);
        Multi(N);
        printf("give O for yes N for no:");
        scanf(" %c", &c);
    }
}