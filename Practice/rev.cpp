#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;
// } *head = NULL;

// void create(int arr[], int n)
// {
//     struct Node *p, *last;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     head->data = arr[0];
//     head->next = NULL;
//     last = head;
//     for (int i = 1; i < n; i++)
//     {
//         p = new Node;
//         p->data = arr[i];
//         p->next = NULL;
//         last->next = p;
//         last = p;
//     }
// }

// int count(struct Node *p)
// {
//     int x = 0;
//     while (p->next != NULL)
//     {
//         x++;
//         p = p->next;
//     }
//     return x;
// }

// void insert(struct Node *p, int x, int index)
// {
//     struct Node *t = (struct Node *)malloc(sizeof(struct Node));
//     t->data = x;
//     if (index < 0 || index > count(p))
//     {
//         return;
//     }
//     else
//     {
//         if (index == 0)
//         {
//             t->next = head;
//             head = t;
//         }

//         else
//         {
//             for (int i = 0; i < index - 1; i++)
//             {
//                 p = p->next;
//             }
//             t->next = p->next;
//             p->next = t;
//         }
//     }
// }
// void sortinsert(struct Node *p, int x)
// {
//     struct Node *t = (struct Node *)malloc(sizeof(struct Node)), *q;
//     t->data = x;
//     q = NULL;
//     if (p == NULL)
//     {
//         head = t;
//     }
//     else
//     {
//         while (p && p->data < x)
//         {
//             q = p;
//             p = p->next;
//         }
//         if(p==head){
//             t->next = p;
//             head = t;
//         }
//         else{
//             t->next = q->next;
//             q->next = t;
//         }
//     }
// }

// void display(struct Node *p)
// {
//     while (p != NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// int main()
// {
//     int arr[] = {11, 22, 33, 44, 55};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     create(arr, n);
//     // display(head);
//     cout << endl;
//     int x, index;
//     // cout << "Enter the index and element to be inserted:-" << endl;
//     // cin >> x >> index;
//     // insert(head, x, index);
//     sortinsert(head,4);
//     display(head);
//     return 0;
// }
#include<stdio.h>
#include<malloc.h>
 
struct node{
    int data;
    struct node* left;
    struct node* right;
};
 
struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}
 
void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
 
void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
 
void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
 
int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}
 
struct node * searchIter(struct node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}
 
void insert(struct node *root, int key){
    struct node *prev = NULL;
    while(root!=NULL){
        prev = root;
        if(key==root->data){
            printf("Cannot insert %d, already in BST", key);
            return;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct node* new = createNode(key);
    if(key<prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }
}

struct node *inOrderPredecessor(struct node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value){

    struct node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }

    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}
 
int main(){
     
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  
 
    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    printf("\n");
    deleteNode(p, 3);
    inOrder(p);

    return 0;
}
