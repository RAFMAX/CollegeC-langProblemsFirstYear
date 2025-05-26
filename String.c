#include <stdio.h>
#include <stdlib.h>

int str(char *c){
    int i = 0;
    while(*c != '\0') {
        i++;
        c++;
    }
    return i;
}

int main(){
    char strl[100];
    printf("give string : ");
    scanf("%s", strl);
    printf("%d", str(strl));
}