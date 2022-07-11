#include <bits/stdc++.h>
using namespace std;

// struct stacki
// {
//     int size;
//     int top;
//     int *arr;
// };

// int isFull(struct stacki *p)
// {
//     if (p->top == p->size - 1)
//     {
//         return 1;
//     }
//     return 0;
// }

// int isEmpty(struct stacki *p)
// {
//     if (p->top == -1)
//     {
//         return 1;
//     }
//     return 0;
// }

// void push(struct stacki *p)
// {
//     if (isFull(p))
//     {
//         cout << "Stack overflow!" << endl;
//     }
//     else
//     {
//         cout << "Enter the element to be inserted:-" << endl;
//         for (int i = 0; i < p->size; i++)
//         {
//             int ele;
//             cin >> ele;
//             p->top++;
//             p->arr[p->top] = ele;
//         }
//     }
// }
// void display(struct stacki *p)
// {
//     for (int i = 0; i < p->size; i++)
//     {
//         cout << "Element :- " << p->arr[i] << endl;
//     }
// }

// void pop(struct stacki *p)
// {
//     if (isEmpty(p))
//     {
//         cout << "Stack underflow!" << endl;
//     }
//     else
//     {
//         for (int i = 0; i < p->size; i++)
//         {
//             cout << p->arr[p->top] << endl;
//             p->top--;
//         }
//     }
// }

// int peek(struct stacki* p,int i){
//     int fuck = p->top-i+1;
//     if(fuck < 0){
//         printf("Not a valid position for the stack\n");
//         return -1;
//     }
//     else{
//         return p->arr[fuck];
//     }
// }

// int main()
// {
//     struct stacki *p = (struct stacki *)malloc(sizeof(struct stacki));
//     int n;
//     cout << "Enter the size:-" << endl;
//     cin >> n;
//     p->size = n;
//     p->top = -1;
//     p->arr = (int *)malloc(p->size * sizeof(int));
//     cout << "Stack has been created succesfully:-" << endl;
//     push(p);
//     cout << endl;
//     display(p);

//     return 0;
// }

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// int isEmpty(struct Node *top)
// {
//     if (top == NULL)
//     {
//         return 1;
//     }
//     return 0;
// }
// void traversing(struct Node *top)
// {
//     while (top != NULL)
//     {
//         cout << "Element :-" << top->data << endl;
//         top = top->next;
//     }
// }
// int isFull(struct Node *top)
// {
//     struct Node *p = (struct Node *)malloc(sizeof(struct Node));
//     if (p == NULL)
//     {
//         return 1;
//     }
//     return 0;
// }

// struct Node *push(struct Node *top, int data)
// {
//     if (isFull(top))
//     {
//         cout << "Stack Overflow!\n";
//     }
//     struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//     n->data = data;
//     n->next = top;
//     top = n;
//     return top;
// }

// int pop(struct Node **top)
// {
//     if (isEmpty(*top))
//     {
//         cout << "Stack underflow!" << endl;
//     }
//     else
//     {
//         struct Node *n = *top;
//         *top = (*top)->next;
//         int x = n->data;
//         free(n);
//         return x;
//     }
// }

// int main()
// {
//     struct Node *top = NULL;
//     top = push(top, 3);
//     top = push(top, 5);
//     top = push(top, 7);
//     traversing(top);
//     cout << "After Popping:-" << endl;
//     int y = pop(&top);
//     cout << "Popped Elmenet:- "<< y << endl;
//     traversing(top);
//     return 0;
// }

// struct stacki
// {
//     int size;
//     int top;
//     char *arr;
// };

// int isEmpty(struct stacki *sp)
// {
//     if (sp->top == -1)
//     {
//         return 1;
//     }
//     return 0;
// }

// int isFull(struct stacki *sp)
// {
//     if (sp->top != sp->size-1)
//     {
//         return 1;
//     }
//     return 0;
// }

// void push(struct stacki *sp, char i)
// {
//     if (isFull(sp))
//     {
//         cout << "Stack overflow!" << endl;
//     }
//     else
//     {
//         sp->top++;
//         sp->arr[sp->top] = i;
//     }
// }

// char pop(struct stacki *sp)
// {
//     if (isEmpty(sp))
//     {
//         cout << "Stack Underflow!" << endl;
//         return -1;
//     }
//     char val = sp->arr[sp->top];
//     sp->top--;
//     return val;
// }

// int Matching(char *exp)
// {
//     struct stacki *sp;
//     sp->size = 100;
//     sp->top = -1;
//     sp->arr = (char *)malloc(sp->size * sizeof(char));

//     for (int i = 0; exp[i] != '\0'; i++)
//     {
//         if (exp[i] == '(')
//         {
//             push(sp, '(');
//         }
//         else if (exp[i] == ')')
//         {
//             if (isEmpty(sp))
//             {
//                 return 0;
//             }
//             pop(sp);
//         }
//     }

//     if (isEmpty(sp))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     char * exp = "2*(345-45)((()";
//     if (Matching(exp))
//     {
//         cout << "Parenthesis is Matching" << endl;
//     }
//     else
//     {
//         cout << "Did not matching" << endl;
//     }
//     return 0;
// }

// struct Node
// {
//     char data;
//     struct Node *next;
// } *st = NULL;

// void push(char x)
// {
//     struct Node *t = new Node;
//     if (t == NULL)
//     {
//         cout << "Stack Overflow!!" << endl;
//     }
//     else
//     {
//         t->data = x;
//         t->next = st;
//         st = t;
//     }
// }

// char pop()
// {
//     struct Node *t = new Node;
//     char x = -1;
//     if (st == NULL)
//     {
//         cout << "Stack Underflow!!" << endl;
//     }
//     else
//     {
//         t = st;
//         x = t->data;
//         st = st->next;
//         free(t);
//     }
//     return x;
// }

// int operand(char x)
// {
//     if (x == '+' || x == '*' || x == '/' || x == '-')
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// int pred(char x)
// {
//     if (x == '+' || x == '-')
//     {
//         return 1;
//     }

//     else if (x == '*' || x == '/')
//     {
//         return 2;
//     }
//     else
//     {
//         return 0;
//     }
// }
// char top(){
//     return st->data;
// }

// char *In2post(char *infix)
// {
//     int i = 0, j = 0;
//     int len = strlen(infix);
//     char *postfix = (char*)malloc((len)*sizeof(char));

//     while (infix[i] != '\0')
//     {
//         if (operand(infix[i]))
//         {
//             postfix[j++] = infix[i++];
//         }
//         else
//         {
//             if (pred(infix[i])>pred(top()))
//             {
//                 push(infix[i++]);
//             }
//             else{
//                 postfix[j++] = pop();
//             }
//         }
//     }

//     while(st!=NULL){
//         postfix[j++] = pop();
//     }
//     postfix[j] = '\0';
//     return postfix;
// }

// int main()
// {
//     char *infix = (char *)"a+b*c-d/e";
//     push('#');
//     char *postfix = In2post(infix);
//     cout<<postfix<<endl;
// }

// struct Queues
// {
//     int size;
//     int front;
//     int rear;
//     int *arr;
// };

// void enqueue(struct Queues *q, int x)
// {
//     if (q->rear == q->size - 1)
//     {
//         cout << "Queue is full!" << endl;
//     }
//     else
//     {
//         q->rear++;
//         q->arr[q->rear] = x;
//     }
// }

// int dequeue(struct Queues *q)
// {
//     int x = -1;
//     if (q->front == q->rear)
//     {
//         cout << "Queue is empty!!" << endl;
//     }
//     else
//     {
//         q->front++;
//         x = q->arr[q->front];
//     }
//     return x;
// }

// void display(struct Queues *q)
// {
//     for (int i = q->front + 1; i <=q->rear; i++)
//     {
//         cout << q->arr[i] << " ";
//     }
//     cout << endl;
// }

// void create(struct Queues *q, int size)
// {
//     q->front = q->rear = -1;
//     q->size = size;
//     q->arr = (int *)malloc(sizeof(int) * q->size);
// }

// int main()
// {
//     struct Queues q;
//     int size;
//     cout<<"Enter the size:-"<<endl;
//     cin>>size;
//     create(&q,size);
//     enqueue(&q,2);
//     enqueue(&q,4);
//     enqueue(&q,1);
//     enqueue(&q,0);
//     enqueue(&q,6);
//     enqueue(&q,9);
//     display(&q);
//     return 0;
// }

// struct Queues
// {
//     int size;
//     int front;
//     int rear;
//     int *arr;
// };

// void create(struct Queues *q, int size)
// {
//     q->size = size;
//     q->front = q->rear = 1;
//     q->arr = (int*)malloc(q->size*sizeof(int));
// }

// void enqueue(struct Queues* q,int x){
//     if(q->rear == q->size-1){
//         cout<<"Queue is Full!"<<endl;
//     }
//     else{
//         q->rear++;
//         q->arr[q->rear] = x;
//     }
// }

// int dequeue(struct Queues *q){
//     int x=1;
//     if(q->front == q->rear){
//         cout<<"Queue id Empty!"<<endl;
//     }

//     else{
//         q->front++;
//         x = q->arr[q->front];
//         return x;
//     }
// }

// void display(struct Queues* q){
//     for(int i = q->front+1;i<=q->rear;i++){
//         cout<<q->arr[i]<<" ";
//     }
// }

// int main()
// {
//     struct Queues q;
//     int n ;
//     cout<<"Enter the size :-"<<endl;
//     cin>>n;
//     create(&q,n);
//     enqueue(&q,4);
//     enqueue(&q,8);
//     enqueue(&q,12);
//     enqueue(&q,16);
//     enqueue(&q,20);
//     display(&q);

//     cout<<"Element dequeue :- "<<dequeue(&q)<<endl;
//     cout<<"Element dequeue :- "<<dequeue(&q)<<endl;
//     cout<<"Element dequeue :- "<<dequeue(&q)<<endl;
//     cout<<"Element dequeue :- "<<dequeue(&q)<<endl;
//     cout<<"Element dequeue :- "<<dequeue(&q)<<endl;
//     return 0;
// }

struct Stack
{
    int data;
    struct Stack *next;
} *head = NULL;

void create(int arr[], int n)
{
    struct Stack *t, *last;
    head = new Stack;
    head->data = arr[0];
    head->next = NULL;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new Stack;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int size(struct Stack *p)
{
    int x = 0;
    while (p != NULL)
    {
        p = p->next;
        x++;
    }
    return x;
}

void insert(struct Stack *p, int x, int index)
{
    struct Stack *q = p, *t = NULL;
    t = new Stack;
    t->data = x;
    if (index < 0 || index > size(p))
    {
        return;
    }

    if (index == 0)
    {
        t->next = head;
        head = t;
    }
    else
    {

        for (int i = 0; i < index - 1; i++)
        {
            q = q->next;
        }

        t->next = q->next;
        q->next = t;
    }
}

void display(struct Stack *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        display(p->next);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    create(arr, n);
    display(head);
    cout << "Displayig After Inserting:-" << endl;
    insert(head, 13, 0);
    display(head);
    return 0;
}