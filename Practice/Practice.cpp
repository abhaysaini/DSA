#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
}*head = NULL;

void create(int A[],int n){
    struct Node*t,*last;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i <=n; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct Node* p){
    if(p->next!=NULL){
        display(p->next);
        cout<<p->data <<" ";
    }
}

int main(){
int A[] = {10,20,11,14,23,24};
int n = sizeof(A)/sizeof(A[0]);
create(A,n);
display(head);
return 0;
}