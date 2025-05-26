#include <stdio.h>
#include <stdlib.h>


/*
typedef struct Node{
    int val;
    struct Node* next;
}Node;
Node* Create(int V){
    Node* new = malloc(sizeof(Node));
    new->next = NULL;
    new->val = V;
    return new;
}
void Add(Node* A,Node* H){
    Node* P = H;
    while(P->next != NULL){
        P = P->next;
    }
    P->next = A;
}
void Print(Node* H){
    Node* P = H;
    while(P != NULL){
        printf("%d -> ", P->val);
        P = P->next;
    }
    printf("NULL\n");
}
int Count(Node* H){
    Node* P = H;
    int i = 0;
    if (P != NULL) {
        i = 1; 
        while (P->next != NULL) {
            i++;
            P = P->next;
        }
    }
    return i;
}
int Exist(Node* H,int V){
    Node* P = H;
    while (P != NULL ){
        if (V == P->val){
            return 1;
        }
        P = P->next;
    }
    return 0;
}
void Delete(Node** PH){
    Node* T = *PH;
    *PH = (*PH)->next;
    free(T);
    return *PH;
}

int main(){
    int N,T,V;
    Node* H;
    printf("give N : ");
    scanf("%d", &N);
    printf("give the  first element : ");
    scanf("%d", &T);
    H = Create(T);
    for (int i = 0;i < N-1;i++) {
        printf("give %d element : ", i+2);
        scanf("%d", &T);
        Add(Create(T), H);
    }
    Print(H);
    printf("there is %d elements\n",Count(H));
    printf("give V : ");
    scanf("%d",&V);
    if (Exist(H,V) == 1){
        printf("%d exists in the list\n",V);
    }
    else {
        printf("%d doesn't exists in the list\n",V);
    }
    Delete(&H);
    Print(H);
}
*/

typedef struct Node{
    int Val;
    struct Node* Next;
}Node;

void Insert(Node* H,int V){
    Node* P = H;
    Node* Q = H->Next;
    Node* NH;
    int Modify = 0;
    if ((H->Val) > V){
        NH = (Node*)malloc(sizeof(Node));
        NH->Next = H;
        NH->Val = V;
        H = NH;
    }
    else{
        while((Q->Val)<V && Q != NULL){
            Q = Q->Next;
            P = P->Next;
        }
        Node* New = (Node*)(malloc(sizeof(Node)));
        New->Val = V;
        if(Q != NULL){
            New->Next = Q;
            P->Next = New;
        }
        else{
            New->Next = NULL;
            P->Next = New;
        }
    }   
}
Node* Invert(Node* H){
    if(H != NULL){
        Node* P = H;
        Node* Q = NULL;
        while(P != NULL){
            Node* F = (Node*)(malloc(sizeof(Node)));
            F->Next = Q;
            F->Val = P->Val;
            Q = F;
            P=P->Next;
        }
        return Q;
    }
    else{
        printf("empty list\n");
        return 0;
    }
}
Node* Create(int V){
    Node* new = malloc(sizeof(Node));
    new->Next = NULL;
    new->Val = V;
    return new;
}
void Add(Node* A,Node* H){
    Node* P = H;
    while(P->Next != NULL){
        P = P->Next;
    }
    P->Next = A;
}
void Print(Node* H){
    Node* P = H;
    while(P != NULL){
        printf("%d -> ", P->Val);
        P = P->Next;
    }
    printf("NULL\n");
}
Node* DeleteDoubs(Node* H){
    Node* P = H;
    Node* Q = H->Next;
    while(P != NULL){
        Q = P->Next;
        while(Q != NULL){
            if(P->Val == Q->Val){
                Node* T = Q;
                P->Next = Q->Next;
                free(T);
            }
            Q=Q->Next;
        }
        P = P->Next;
    }
    return H;
}

int main(){
    Node* H;
    int T,N,R;
    printf("give N : ");
    scanf("%d", &N);
    printf("give the  first element : ");
    scanf("%d", &T);
    H = Create(T);
    for (int i = 1;i < N;i++) {
        printf("give %d element : ", i+1);
        scanf("%d", &T);
        Add(Create(T), H);
    }
    printf("give value to insert : ");
    scanf("%d", &R);
    Insert(H,R);
    Print(H);
    H = Invert(H);
    Print(H);
    DeleteDoubs(H);
    Print(H);
}