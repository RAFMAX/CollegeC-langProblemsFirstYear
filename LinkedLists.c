#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int Value;
    struct node *Next;
}node;

node *createnode(int val){
    node* new = (node*)malloc(sizeof(node));
    new->Next = NULL;
    new->Value = val;
    return new;
}

node *add(node* Head,int val){
    node *new = (node*)malloc(sizeof(node));
    new->Value = val;
    new->Next = NULL;
    node *current = Head;
    while(current->Next != NULL) {
        current = current->Next;
    }
    current->Next = new;
    return Head;
}
void display(node* Head){
    node *current = Head;
    while(current != NULL) {
        printf("%d\n", current->Value);
        current=current->Next;
    }
}
int Number(node* Head){
    int N = 0;
    node *current = Head;
    while(current != NULL) {
        N++;
        current=current->Next;
    }
    return N;
}
int Bool(node *Head, int S){
    node *current = Head;
    int B = 0;
    while(current != NULL && B == 0) {
        if(current->Value == S) {
            B = 1;
        }
        current = current->Next;
    }
    return B;
}

int main() {
    int V, N, I;
    node *H = NULL;
    node *C = NULL;
    
    printf("Give head value: ");
    scanf("%d", &V);
    H = createnode(V);
    
    printf("How many values to add? ");
    scanf("%d", &N);

    
    for(int i=0;i<N;i++) {
        printf("give V: ");
        scanf("%d", &V);
        add(H,V);
    }
    display(H);
    printf("%d\n", Number(H));
    printf("give I :");
    scanf("%d", &I);
    if(Bool(H,I) == 1) {
        printf("there is %d\n", I);
    }
}
