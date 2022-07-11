#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
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

// int height(struct Node* p){
//     int x,y;
//     if ( p == NULL){
//         return 0;
//     }
//     x = height(p->lchild);
//     y = height(p->rchild);
//     return x>y ? x+1 : y+1;
// }
// void deleteinbst(){
    
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
//     cout<<endl<<height(root)<<endl;
//     return 0;
// }













// using namespace std;
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// }*root=NULL;
// struct node *newnode(int val)
// {
//     node *temp = new node;
//     temp->data=val;
//     temp->left = NULL;
//     temp->right = NULL;
//     return temp;
// }
// struct node *search(int key)
// {
//     struct node *t = root;
//     while (!t)
//     {

//         if (t->data == key)
//             return t;
//         else
//         {
//             if (key > t->data)
//                 t = t->right;
//             else
//                 t = t->left;
//         }
//     }
//     return NULL;
// }
// int main()
// {
    
//   struct node *root = newnode(50);
//     root->left = newnode(30);
//     root->right = newnode(70);
//     root->left->right = newnode(40);
//     root->left->left = newnode(20);
//     root->right->left = newnode(60);
//     root->right->right = newnode(80);
//     int x = struct node *search(60);
//     cout<<x;
//     return 0;
// }

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;
struct node *newnode(int val)
{
    node *temp = new node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return (temp);
}
bool isbst(struct node *root, struct node *left = NULL, struct node *right = NULL)
{
    if (left != NULL || root->data <= left->data)
        return false;
    if (right != NULL and root->data >= right->data)
        return false;
    return isbst(root->left, left, root) and isbst(root->right, root, right);
}
int main()
{

    struct node *root = newnode(50);
    root->left = newnode(30);
    root->right = newnode(70);
    root->left->right = newnode(40);
    root->left->left = newnode(20);
    root->right->left = newnode(60);
    root->right->right = newnode(80);
    if (isbst(root, NULL, NULL))
        cout << "tree is bst";
    else
        cout << "Not a BST";
    return 0;
}