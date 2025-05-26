#include <stdio.h>
#include <string.h>

struct Livre {
    char Titre[100];
    char Author[100];
    int Year;
};


struct Livre saisirlivre(struct Livre D) {
    scanf("%s", D.Titre);
    scanf("%s", D.Author);
    scanf("%d", &D.Year);
    return D;
}

void afficherlivre(struct Livre D) {
    printf("%s\n", D.Titre);
    printf("%s\n", D.Author);
    printf("%d\n", D.Year);
}

int recherchelivre(char D[],int L1,char A[],int L2) {
    int i,S;
    S = 1;
    if (L1 == L2) {
        while (i<N && S != 0) {
            if (D[i] != A[i]){
                S = 0;
            }
        }
    }
    else {
        S = 0;
    }
    return S;
}

int main() {
    struct Livre T[100];
    int N, i;
    char A[100];
    printf("give N : ");
    scanf("%d", &N);
    for (i=0;i<N;i++) {
        printf("Give Title,Author,Year :\n");
        saisirlivre(T[i]);
    }
    for (i=0;i<N;i++) {
        afficherlivre(T[i]);
    }
    for (i=0;i<N;i++) {
        printf("give Author");
        int L1 = strlen(A);
        scanf("%s", A);
        int L2 = strlen(struct Livre T[i]);
        int Z = recherchelivre(T[i].Author, L1, A, L2);
        if (Z = 1) {
            afficherlivre(T[i]);
        }
    }
}