// #include "headers.h"
// struct Node *root = NULL;

// void treecreate()
// {
//     struct Node *p, *t;
//     struct Queue *q;
//     create(q, 20);
//     root = (struct Node *)malloc(sizeof(struct Node));
//     cout << "Enter the Value for Root:-" << endl;
//     int x;
//     cin >> x;
//     root->data = x;
//     root->lchild = root->rchild = NULL;
//     enqueue(q, root);
//     while (!isEmpty(q))
//     {
//         p = dequeue(q);
//         cout << "Enter the Value for Left child of " << p->data << " :-" << endl;
//         cin >> x;
//         if (x != -1)
//         {
//             t = (struct Node *)malloc(sizeof(struct Node));
//             t->data = x;
//             t->lchild = t->rchild = NULL;
//             p->lchild = t;
//             enqueue(q, t);
//         }

//         cout << "Enter the Value for Right child of " << p->data << " :-" << endl;
//         cin >> x;
//         if (x != -1)
//         {
//             t = (struct Node *)malloc(sizeof(struct Node));
//             t->data = x;
//             t->lchild = t->rchild = NULL;
//             p->rchild = t;
//             enqueue(q, t);
//         }
//     }
// }

// void preorder(struct Node *p)
// {
//     if (p)
//     {
//         cout << p->data << " ";
//         preorder(p->lchild);
//         preorder(p->rchild);
//     }
// }
// void inorder(struct Node *p)
// {
//     if (p)
//     {
//         inorder(p->lchild);
//         cout << p->data << " ";
//         inorder(p->rchild);
//     }
// }
// void postorder(struct Node *p)
// {
//     if (p)
//     {
//         postorder(p->lchild);
//         postorder(p->rchild);
//         cout << p->data << " ";
//     }
// }
// int CountingNode(struct Node *p){
//     int x ,y;
//     if(p!=NULL){
//         x = CountingNode(p->lchild);
//         y = CountingNode(p->rchild);
//         return x+y+1;
//     }
// }

// int height(struct Node *p){
//     int x=0,y=0;
//     x = height(p->lchild);
//     y = height(p->rchild);
//     if(x>y){
//         return x+1;
//     }
//     else{
//         return y+1;
//     }
//     return 0;
// }

// int main()
// {
//     treecreate();
//     cout << "Preorder:-" << endl;
//     preorder(root);
//     cout << "\nInorder:-" << endl;
//     inorder(root);
//     cout << "\nPostorder:-" << endl;
//     postorder(root);

//     cout<<"\nTotal Number of Node :-"<<endl;
//     cout<<CountingNode(root);
//     cout<<"\nHeight of Tree structure :-"<<endl;
//     cout<<height(root);
//     return 0;
// // }
// #include <bits/stdc++.h>
// #include <stdlib.h>
// using namespace std;

// struct Node
// {
//     struct Node *lchild;
//     int data;
//     struct Node *rchild;
// } *root = NULL;

// void insert(int key)
// {
//     struct Node *p = root;
//     struct Node *t, *r;
//     if (root == NULL)
//     {
//         t = (struct Node *)malloc(sizeof(struct Node));
//         t->data = key;
//         t->lchild = t->rchild = NULL;
//         root = t;
//         return;
//     }

//     while (p != NULL)
//     {
//         r = p;
//         if (key < p->data)
//         {
//             p = p->lchild;
//         }
//         else if (key > p->data)
//         {
//             p = p->rchild;
//         }
//         else
//         {
//             return;
//         }
//     }
//     t = (struct Node *)malloc(sizeof(struct Node));
//     t->data = key;
//     t->lchild = t->rchild = NULL;
//     if (key < r->data)
//     {
//         r->lchild = t;
//     }
//     else
//     {
//         r->rchild = t;
//     }
// }

// void inorder(struct Node *p)
// {
//     if (p)
//     {
//         inorder(p->lchild);
//         cout << p->data << " ";
//         inorder(p->rchild);
//     }
// }

// Node *insucc(Node *root)
// {
//     root = root->rchild;
//     while (root->lchild != NULL)
//     {
//         root = root->lchild;
//     }
//     return root;
// }

// Node *inpred(Node *root)
// {
//     root = root->lchild;
//     while (root->rchild != NULL)
//     {
//         root = root->rchild;
//     }
//     return root;
// }

// int height(Node *p)
// {
//     int x, y;
//     if (p == NULL)
//         return 0;
//     x = height(p->lchild);
//     y = height(p->rchild);
//     return x>y ? x+1 : y+1;

//     return 0;
// }
// Node *deleteinBST(Node *root, int key)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     if (root->lchild==NULL && root->rchild==NULL)
//     {
//         free(root);
//         return NULL;
//     }
//     if (key < root->data)
//     {
//         root->lchild = deleteinBST(root->lchild, key);
//     }
//     else if (key > root->data)
//     {
//         root->rchild = deleteinBST(root->rchild, key);
//     }

//     else
//     {
//         Node *ipre ;
//         if(height(root->lchild)>height(root->rchild)){
//             ipre = inpred(root);
//             root->data = ipre->data;
//             root->lchild = deleteinBST(root->lchild,ipre->data);
//         }
//         else{
//             ipre = insucc(root);
//             root->data = ipre->data;
//             root->rchild = deleteinBST(root->rchild,ipre->data);
//         }

//     }
//     return root;
// }

// int main()
// {
//     insert(10);
//     insert(5);
//     insert(11);
//     insert(9);
//     insert(7);
//     insert(13);
//     insert(3);
//     inorder(root);
//     root = deleteinBST(root, 5);
//     cout << endl;
//     inorder(root);
//     return 0;
// }

//             //         10
//             //         /\
//             //       5   11
//             //     /  \   \
//             //    3    9   13
//             //        /
//             //       7

// #include <bits/stdc++.h>
// #include <stdlib.h>
// using namespace std;

// struct Node
// {
//     struct Node *lchild;
//     int data;
//     struct Node *rchild;
// } *root = NULL;

// void insert(int x)
// {
//     struct Node *p = root;
//     struct Node *r, *t;
//     if (root == NULL)
//     {
//         t = (struct Node *)malloc(sizeof(struct Node));
//         t->data = x;
//         t->lchild = t->rchild = NULL;
//         root = t;
//         return;
//     }
//     while (p != NULL)
//     {
//         r = p;
//         if (x < p->data)
//         {
//             p = p->lchild;
//         }
//         else if (x > p->data)
//         {
//             p = p->rchild;
//         }
//         else
//         {
//             return;
//         }
//     }
//     t = (struct Node *)malloc(sizeof(struct Node));
//     t->data = x;
//     t->lchild = t->rchild = NULL;
//     if (x < r->data)
//     {
//         r->lchild = t;
//     }
//     else
//     {
//         r->rchild = t;
//     }
// }

// int height(Node *p)
// {
//     int x, y;
//     if (p == NULL)
//     {
//         return 0;
//     }
//     x = height(p->lchild);
//     y = height(p->rchild);
//     return x > y ? x + 1 : y + 1;
// }

// void inorder(struct Node *p)
// {
//     if (p)
//     {
//         inorder(p->lchild);
//         cout << p->data << " ";
//         inorder(p->rchild);
//     }
// }

// Node *ipred(Node *root)
// {
//     while (root->rchild != NULL)
//     {
//         root = root->rchild;
//     }
//     return root;
// }

// Node *isucc(Node *root)
// {
//     while (root->lchild != NULL)
//     {
//         root = root->lchild;
//     }
//     return root;
// }

// int max(int a, int b)
// {
//     return a > b ? a : b;
// }

// int calcheight(struct Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     return max(calcheight(root->lchild), calcheight(root->rchild)) + 1;
// }

// int calcDiameter(struct Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int lheight = calcheight(root->lchild);
//     int rheight = calcheight(root->rchild);
//     int final = lheight + rheight + 1;

//     int ldiameter = calcDiameter(root->lchild);
//     int rdiameter = calcDiameter(root->rchild);

//     return max(final, max(ldiameter, rdiameter));
// }

// Node *deleteinbst(Node *root, int key)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     else if (root->lchild == NULL && root->rchild == NULL)
//     {
//         free(root);
//         return NULL;
//     }
//     if (key < root->data)
//     {
//         root->lchild = deleteinbst(root->lchild, key);
//     }
//     else if (key > root->data)
//     {
//         root->rchild = deleteinbst(root->rchild, key);
//     }
//     else
//     {
//         Node *ipre;
//         if (height(root->lchild) > height(root->rchild))
//         {
//             ipre = ipred(root->lchild);
//             root->data = ipre->data;
//             root->lchild = deleteinbst(root->lchild, ipre->data);
//         }
//         else
//         {
//             ipre = isucc(root->rchild);
//             root->data = ipre->data;
//             root->rchild = deleteinbst(root->rchild, ipre->data);
//         }
//     }
//     return root;
// }
// int main()
// {
//     insert(50);
//     insert(15);
//     insert(25);
//     insert(30);
//     insert(40);
//     insert(10);
//     insert(5);
//     insert(2);
//     insert(1);
//     insert(55);
//     inorder(root);
//     cout << endl
//          << calcDiameter(root) << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// #include <stdlib.h>
// using namespace std;
// struct Node
// {
//     struct Node *lchild;
//     int data;
//     struct Node *rchild;
// } *root = NULL;

// void insert(int key)
// {
//     struct Node *p = root;
//     struct Node *t, *r;
//     if (root == NULL)
//     {
//         t = (struct Node *)malloc(sizeof(struct Node));
//         t->data = key;
//         t->lchild = t->rchild = NULL;
//         root = t;
//         return;
//     }

//     while (p != NULL)
//     {
//         r = p;
//         if (key < p->data)
//         {
//             p = p->lchild;
//         }
//         else if (key > p->data)
//         {
//             p = p->rchild;
//         }
//         else
//         {
//             return;
//         }
//     }
//     t = (struct Node *)malloc(sizeof(struct Node));
//     t->data = key;
//     t->lchild = t->rchild = NULL;
//     if (key < r->data)
//     {
//         r->lchild = t;
//     }
//     else
//     {
//         r->rchild = t;
//     }
// }

// void inorder(struct Node* p){
//     if(p){
//         inorder(p->lchild);
//         cout<<p->data<<" ";
//         inorder(p->rchild);
//     }
// }

// int main()
// {
//     insert(10);
//     insert(15);
//     insert(8);
//     insert(20);
//     insert(14);
//     insert(5);
//     insert(9);
//     inorder(root);
//     return 0;
// }

// /*
//                     10
//                    /  \
//                   8    15
//                 / \    / \
//                5   9 14   20
// */
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

void insert(int A[], int n)
{
    int temp, i = n;
    temp = A[n];
    while (i > 1 && temp > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}

int deleteinheap(int A[], int n)
{
    int x, i, j, temp, val;
    val = A[1];
    x = A[n];
    i = 1;
    j = 2 * i;
    while (j < n - 1)
    {
        if (A[j + 1] > A[j])
        {
            j = j + 1;
        }
        if (A[i] < A[j])
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = 2 * j;
        }
        else
        {
            break;
        }
        return val;
    }
}

int main()
{
    int A[] = {0,14,15,5,20,30,8,40};
    for (int i = 2; i <= 7; i++)
    {
        insert(A, i);
    }
    for (int i = 1; i <= 7; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\nDeleted Valur from Heap :-" << deleteinheap(A, 7) << endl;
    
    return 0;
}