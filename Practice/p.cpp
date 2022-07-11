#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*first =NULL;

void display(struct Node* p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}

void rdisplay(struct Node* p){
    if(p!=NULL){
        display(p->next);
        cout<<p->data<<" ";
    }
}
void itdisplay(struct Node* first){
    struct Node*r,*p,*q;
    p = first;
    r=NULL;
    q=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }
    first = r;

    while (first!=NULL)
    {   
        cout<<r->data<<" ";
        r=r->next;
    }
    
}

void create(int A[],int n){
    first = (struct Node*)malloc(sizeof(struct Node));
    struct Node*t,*last;
    first->data= A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data= A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    
}


int main(){
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    int x = sizeof(A)/sizeof(A[0]);
    create(A,x);
    rdisplay(first);
    itdisplay(first);
    return 0;
}