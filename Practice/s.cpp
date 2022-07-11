#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

// struct Node
// {
//     char data;
//     struct Node *next;
// } *top = NULL;

// void push(char x)
// {
//     struct Node *t = new Node;
//     if (t == NULL)
//     {
//         cout << "Stack Overflow!" << endl;
//     }
//     else
//     {
//         t->data = x;
//         t->next = top;
//         top = t;
//     }
// }

// char pop()
// {
//     struct Node *t;
//     char x = -1;
//     if (top == NULL)
//     {
//         cout << "stack Overflow!" << endl;
//     }
//     else
//     {
//         x = top->data;
//         t = top;
//         top = top->next;
//         delete (t);
//     }
//     return x;
// }

// void display(struct Node *p)
// {
//     while (p != NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// int balanced(char *exp)
// {
//     for (int i = 0; exp[i] != '\0'; i++)
//     {
//         if (exp[i] == '(')
//         {
//             push(exp[i]);
//         }
//         else if (exp[i] == ')')
//         {
//             if (top == NULL)
//             {
//                 return 0;
//             }
//             else
//             {
//                 pop();
//             }
//         }
//     }

//     if (top == NULL)
//         return 1;
//     else
//         return 0;
// }
// int main()
// {

//     char *a = "((1*2+(a*b+(c-d)))))";
//     int x = balanced(a);
//     if (x == 1)
//         cout << "Balanced!" << endl;
//     else
//         cout << "Unbalanced!" << endl;

//     return 0;
// }

// struct Stack
// {
//     int size;
//     int top;
//     int *arr;
// };

// void create(struct Stack *st)
// {
//     cout << "Enter the size of the Stack:-" << endl;
//     cin >> st->size;
//     st->top = -1;
//     st->arr = (int*)malloc(sizeof(int));
// }
// int isEmpty(struct Stack *st) {
//     return st->top == -1;
// }

// int isFull(struct Stack * st) {
//     return st->top==st->size-1;
// }
// void push(struct Stack *st,int x) {
//     if(isFull(st)){
//         cout<<"Stack overflow!"<<endl;
//     }
//     else{
//         st->top++;
//         st->arr[st->top] = x;
//     }
// }
// int pop(struct Stack * st) {
//     int x = -1;
//     if(isEmpty(st)){
//         cout<<"Stack Underflow!"<<endl;
//     }
//     else{
//         x = st->arr[st->top--];
//     }
//     return x;
// }
// void displaY(struct Stack *st){
//     for (int i = st->size; i >=0; i--)
//     {
//         cout<<st->arr[i]<<" ";
//     }

// }

// int main()
// {
//     struct Stack st;
//     create(&st);
//     push(&st,9);
//     push(&st,8);
//     push(&st,6);
//     push(&st,34);
//     push(&st,66);
//     push(&st,5);
//     push(&st,4);

//     displaY(&st);

// }

// struct Stack
// {
//     char data;
//     struct Stack *next;
// } *top = NULL;

// void push(char a)
// {
//     struct Stack *t = new Stack;
//     if (t == NULL)
//     {
//         cout << "Stack Overflow!!" << endl;
//     }
//     else
//     {
//         t->data = a;
//         t->next = top;
//         top = t;
//     }
// }

// char pop()
// {
//     struct Stack *t;
//     char x = -1;
//     if (top == NULL)
//     {
//         cout<<"Stack Underflow!!"<<endl;
//     }
//     else
//     {
//         t = top;
//          x = t->data;
//         top = top->next;
//         free(t);
//         return x;
//     }
// }

// int match(char a, char b)
// {
//     if (a == '(' && b == ')')
//     {
//         return 1;
//     }
//     if (a == '[' && b == ']')
//     {
//         return 1;
//     }
//     if (a == '{' && b == '}')
//     {
//         return 1;
//     }

//     return 0;
// }

// int isBalanced(char *exp)
// {
//     top = new Stack;
//     char popped;
//     for (int i = 0; i != '\0'; i++)
//     {
//         if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
//         {
//             push(exp[i]);
//         }

//         else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
//         {
//             if (top == NULL)
//             {
//                 return 0;
//             }
//             popped = pop();

//             if (!match(popped, exp[i]))
//             {
//                 return 0;
//             }
//         }
//     }

//     if (top == NULL)
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
//     char *exp = "{[(a+b)-(a-b)]+a+b}";

//     if(isBalanced(exp)){
//         cout<<"Is Balanced !!"<<endl;
//     }
//     else{
//         cout<<"Not Balanced !!"<<endl;
//     }

//     return 0;
// }

struct Stack
{
    char data;
    struct Stack *next;
} *top = NULL;

void push(char a)
{
    struct Stack *t = new Stack;
    if (t == NULL)
    {
        cout << "Stack Overflow!!" << endl;
    }
    else
    {
        t->data = a;
        t->next = top;
        top = t;
    }
}

char pop()
{
    struct Stack *t;
    char x = -1;
    if (top == NULL)
    {
        cout<<"Stack Underflow!!"<<endl;
    }
    else
    {
        t = top;
         x = t->data;
        top = top->next;
        free(t);
    }
        return x;
}

int match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    if (a == '{' && b == '}')
    {
        return 1;
    }

    return 0;
}

int isBalanced(char *exp)
{
    top = new Stack;
    char popped;
    for (int i = 0; i != '\0'; i++)
    {
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
        {
            push(exp[i]);
        }

        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (top == NULL)
            {
                return 0;
            }
            popped = pop();

            if (!match(popped, exp[i]))
            {
                return 0;
            }
        }
    }

    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp = (char *)"{[(a+b)-(a-b)]+a+b}";
    int x=isBalanced(exp);
    if(x=1){
        cout<<"Is Balanced !!"<<endl;
    }
    else{
        cout<<"Not Balanced !!"<<endl;
    }

    return 0;
}