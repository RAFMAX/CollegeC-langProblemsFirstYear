#include <stdio.h>
#include <stdlib.h>

int strlen(char S1[]){
    int i = 0;
    if (S1[0] != '\0') {
        i = 1; 
        while (S1[i] != '\0') {
            i++;
        }
    }
    return i;
}
int strcmp(char S1[],char S2[]){
    int B;
    if (strlen(S1) == strlen(S2)){
        B = 1;
        int i = 0;
        while (S1[i] != '\0' && B == 1) {
            if (S1[i] != S2[i]){
                B = 0;
            }
            i++;
        }
    }
    else {
        B = 0;
    }
    return B;
}
char* strcpy(char* D,char* S){
    char* P;
    P = D;
    while(*S != '\0'){
        *D = *S;
        S++;
        D++;
    }
    *D = '\0';
    return P;
}
char* strcat(char* D,char* S){
    char* ptr = D;
    while (*D != '\0'){
        D++;
    }
    while (*S != '\0'){
        *D = *S;
        D++;
        S++;
    }
    *D ='\0';
    return ptr;
}
int strstr(char* DES,char* SOU){
    char *ptr = DES;
    while (*ptr != '\0'){
        char* S = SOU;
        char* D = ptr;
        while (*S != '\0' && *D != '\0' && *S == *D){
            S++;
            D++;
        }
        if (*S == '\0'){
            return 1;
        }
        ptr++;
    }
    return 0;
}

int main(){
    char S4[20],S3[30],S[20],S1[20],S2[20];
    scanf("%s", S);
    printf("%d\n", strlen(S));
    printf("give 2 strings :");
    scanf("%s%s",S1,S2);
    if (strcmp(S1,S2)==1){
        printf("they are the same\n");
    }
    else {
        printf("they are different\n");
    }
    strcat(S1,S2);
    printf("%s\n", S1);
    strcpy(S1,S2);
    printf("%s\n", S1);
    fgets(S3, sizeof(S3), stdin);
    scanf("%s",S4);
    if (strstr(S3,S4) == 1) {
        printf("there is in the phrase\n");
    }
    else {
        printf("there is not\n");
    }
}