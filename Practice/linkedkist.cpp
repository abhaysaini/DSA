#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void display(struct Node *p)
// {
//     while (p != NULL)
//     {
//         cout << "Element:- " << p->data << endl;
//         p = p->next;
//     }
// }

// void matching(int A[], int n)
// {
//     struct Node *t, *last;
//     first = new Node;
//     first->data = A[0];
//     first->next = NULL;
//     last = first;
//     for (int i = 1; i < n; i++)
//     {
//         t = new Node;
//         t->data = A[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int A[] = {1, 2, 3, 4, 5};
//     int n = sizeof(A) / sizeof(A[0]);
//     matching(A, n);
//     display(first);
//     return 0;
// }

// struct Node
// {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void matching(int a[], int n)
// {
//     struct Node *t, *last;
//     first = new Node;
//     first->data = a[0];
//     first->next = NULL;
//     last = first;
//     for (int i = 1; i < n; i++)
//     {
//         t = new Node;
//         t->data = a[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void display(struct Node *p)
// {
//     while (p != NULL)
//     {
//         cout <<  p->data <<" ";
//         p = p->next;
//     }
// }

// void displayR(struct Node *p)
// {
//     if (p != NULL)
//     {
//         displayR(p->next);
//         cout <<  p->data <<" ";
//     }
// }

// int Count(struct Node *p)
// {
//     int count = 0;
//     if (p == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return Count(p->next) + 1;
//     }
// }

// int Sum(struct Node *p)
// {
//     int sum = 0;
//     if (p == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         return Sum(p->next) + p->data;
//     }
// }

// void Max(struct Node *p)
// {
//     int max = INT32_MIN;
//     while (p)
//     {
//         if (p->data > max)
//         {
//             max = p->data;
//             p = p->next;
//         }
//     }
//     cout << "Maximum Element :- " << max << endl;
// }

// void reversinglist1(struct Node* p,int n){
//     int arr[n];
//     int i=0;
//     while(p != NULL){
//         arr[i]=p->data;
//         p=p->next;
//         i++;
//     }
//     i--;
//     p = first;
//     while(p != NULL){
//         p->data = arr[i--];
//         p=p->next;
//     }
// }

// void reversingbysliding(struct Node* p){
//     struct Node*q=NULL,*r=NULL;
//     while(p!=NULL){
//         r=q;
//         q=p;
//         p=p->next;
//         q->next=r;
//     }
//     first=q;
// }

// struct Node
// {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void sorted(struct Node* p,int x){
//     struct Node*t,*q=NULL;
//     t = new Node;
//     t->data=x;
//     t->next=NULL;
//     if(first==NULL){
//         first = t;
//     }
//     else{
//         while(p && p->data<x){
//             q =p;
//             p=p->next;
//         }
//         if(p == first){
//             t->next = first;
//             first = t;
//         }
//         else{
//             t->next = q->next;
//             q->next =t;
//         }
//     }
// }

// int main()
// {
//     int a[] = {10,20,30,40,50};
//     int n = sizeof(a) / sizeof(a[0]);
//     // matching(a, n);
//     // displayR(first);
//     // cout << "Total Number of Node:-" << Count(first) << endl;
//     // cout << "Sum of the element present in the linked list :- " << Sum(first) << endl;
//     // Max(first);
//     sorted(first,55);
//     // display(first);
//     cout<<"\nDisplaying after calling reversing function:-"<<endl;
//     // reversingbysliding(first);
//     // display(first);
//     return 0;
// }

// struct Node
// {
//     int data;
//     struct Node *next;
// } *first = NULL, *second = NULL,*third=NULL;

// void create(int a[], int n)
// {
//     struct Node *t, *last;
//     first = new Node;
//     first->data = a[0];
//     first->next = NULL;
//     last = first;

//     for (int i = 1; i < n; i++)
//     {
//         t = new Node;
//         t->data = a[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void create2(int b[], int n)
// {
//     struct Node *t, *last;
//     second = new Node;
//     second->data = b[0];
//     second->next = NULL;
//     last = second;

//     for (int i = 1; i < n; i++)
//     {
//         t = new Node;
//         t->data = b[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// int count(struct Node *p)
// {
//     int c = 0;
//     while (p != NULL)
//     {
//         p = p->next;
//         c++;
//     }
//     return c;
// }

// void arraysort(int y[],int n)
// {
//     int temp;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             if (y[i] > y[j])
//             {
//                 temp = y[i];
//                 y[i] = y[j];
//                 y[j] = temp;
//             }
//         }
//     }
// }

// void sortcreate(struct Node *p)
// {
//     struct Node* q = p;
//     int x[count(q)];
//     int i = 0;
//     while (q != NULL)
//     {
//         x[i] = q->data;
//         q = q->next;
//         i++;
//     }
//     arraysort(x,sizeof(x)/sizeof(x[0]));
//     i=0;
//     while(p!=NULL){
//         p->data = x[i];
//         p=p->next;
//         i++;
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

// void merging(struct Node* p,struct Node* q){
//     struct Node *last;
//     if(p->data<q->data){
//         third=last=p;
//         p = p->next;
//         third->next = NULL;
//     }
//     else{
//         third=last=q;
//         q = q->next;
//         third->next = NULL;
//     }

//     while(p&&q){
//         if(p->data<q->data){
//             last->next = p;
//             last =p;
//             p =p->next;
//             last->next=NULL;
//         }
//         else{
//             last->next = q;
//             last =q;
//             q =q->next;
//             last->next=NULL;
//         }
//     }

//     if(p){
//         last->next =p;
//     }
//     if(q){
//         last->next =q;
//     }

// }

// int main()
// {
//     int a[] = {34, 1, 2, 56, 0};
//     int b[] = {25, 15, 5, 45, 35};

//     create(a, 5);
//     create2(b,5);
//     sortcreate(first);
//     sortcreate(second);
//     display(first);
//     cout<<endl;
//     display(second);
//     cout<<endl;
//     merging(first,second);
//     display(third);
//     return 0;
// }     hg

// class linkedlist
// {
// public:
//     struct Node
//     {
//         int data;
//         struct Node *next;
//     };
//     void create(struct Node* head,int A[], int n)
//     {
//         struct Node *t, *last;
//         head = (struct Node *)malloc(sizeof(struct Node));
//         head->data = A[0];
//         head->next = NULL;
//         last = head;
//         for (int i = 1; i < n; i++)
//         {
//             t = (struct Node *)malloc(sizeof(struct Node));
//             t->data = A[i];
//             t->next = NULL;
//             last->next = t;
//             last = t;
//         }
//     }
//     void display(struct Node *p)
//     {
//         while (p->next != NULL)
//         {
//             cout << p->data << " ";
//             p = p->next;
//         }
//     }
// };

// int main()
// {
//     struct Node *head = NULL;
//     linkedlist ll;
//     int A[] = {12, 1, 4, 23, 9, 14};
//     int n = sizeof(A) / sizeof(A[0]);
//     ll.create(head,A, n);
//     ll.display(head);
//     return 0;
// }
// struct Node
// {
//     int data;
//     struct Node *next;
// } *head = NULL;

// class stackll
// {
// public:
//     void push(int x)
//     {
//         struct Node *t = (struct Node *)malloc(sizeof(struct Node));
//         if (t == NULL)
//         {
//             cout << "Stack is Full!!" << endl;
//         }
//         else
//         {
//             t->data = x;
//             t->next = head;
//             head = t;
//         }
//     }

//     int pop()
//     {
//         struct Node *t = (struct Node *)malloc(sizeof(struct Node));
//         int x = -1;
//         if (head == NULL)
//         {
//             cout << "Stack is Empty!!" << endl;
//         }
//         else
//         {
//             t = head;
//             head = head->next;
//             x = t->data;
//             free(t);
//         }
//         return x;
//     }
//     void display(struct Node *t)
//     {

//         while (t != NULL)
//         {
//             cout << t->data << " ";
//             t = t->next;
//         }
//     }
// };

// int main()
// {
//     stackll sll;
//     sll.push(45);
//     sll.push(15);
//     sll.push(35);
//     sll.push(10);
//     sll.push(5);
//     sll.push(25);
//     sll.display(head);
//     cout<<endl<<sll.pop()<<" ";
//     cout<<sll.pop()<<" ";
//     cout<<sll.pop()<<" ";
//     cout<<sll.pop()<<endl;
//     sll.display(head);
// }

// void create(int A[], int n)
// {
//     sort(A,A+n);
//     struct Node *t, *last;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     head->data = A[0];
//     head->next = NULL;
//     last = head;
//     for (int i = 1; i < n; i++)
//     {
//         t = (struct Node *)malloc(sizeof(struct Node));
//         t->data = A[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// Node* sortdlt(struct Node *head)
// {
//     // struct Node *p, *q,*temp;
//     // p = head;
//     // q = head->next;
//     // while ( q->next != NULL)
//     // {
//     //     if (p->data == q->data)
//     //     {
//     //         p->next = q->next;
//     //         q = q->next;
//     //     }
//     //     p = p->next;
//     //     q = q->next;
//     // }
//     // return head;
//     Node* curr = head;
//     Node* temp;
//     while(curr->next!=NULL){
//         if(curr->data == curr->next->data){
//             temp = curr->next;
//             curr->next = curr->next->next;
//             delete temp;
//         }
//         else curr = curr->next;
//     }
//         return head;
// }
// void display(struct Node *p)
// {
//     while (p!= NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// int main()
// {
//     int A[] = {2,10,5,5,6,6,9,2};
//     int n = sizeof(A) / sizeof(A[0]);
//     create(A, n);
//     sortdlt(head);
//     display(head);
//     return 0;
// }

// int binarysearch(int A[], int n,int key)
// {
//     sort(A,A+n);
//     int mid,low,high;
//     low = 0;
//     high = n-1;
//     while(low <= high){
//         mid = (low+high)/2;
//         if(A[mid] == key){
//             return mid;
//         }
//         else if (key > A[mid]){
//             low = mid+1;
//         }
//         else{
//             high = mid -1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int A[] = {5,2,4,10,3,25,3,91,20};
//     int n = sizeof(A) / sizeof(A[0]);
//     int x;
//     cout<<"Enter the element to be searched:-"<<endl;
//     cin>>x;
//     cout<<"Element is present at index :- "<<binarysearch(A,n,x)<<endl;
// }

// #include <iostream>
// #include <queue>

// using namespace std;

void BFS(int vtx, int A[][8], int n){
    queue<int> Q;
    int visited[8] {0};

    // Initial
    cout << vtx << ", " << flush;  // Visit vertex
    visited[vtx] = 1;
    Q.emplace(vtx);

    // Explore
    while (!Q.empty()){
        int u = Q.front();  // Vertex u for exploring
        Q.pop();
        for (int v=1; v<=n; v++){  // Adjacent vertices of vertex u
            if (A[u][v] == 1 && visited[v] == 0){  // Adjacent vertex and not visited
                cout << v << ", " << flush;  // Visit vertex
                visited[v] = 1;
                Q.emplace(v);
            }
        }
    }
    cout << endl;
}

int main (){

int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
               {0, 0, 1, 1, 1, 0, 0, 0},
               {0, 1, 0, 1, 0, 0, 0, 0},
               {0, 1, 1, 0, 1, 1, 0, 0},
               {0, 1, 0, 1, 0, 1, 0, 0},
               {0, 0, 0, 1, 1, 0, 1, 1},
               {0, 0, 0, 0, 0, 1, 0, 0},
               {0, 0, 0, 0, 0, 1, 0, 0}};

    cout << "Vertex: 1 -> " << flush;
    BFS(1, A, 8);

    cout << "Vertex: 4 -> " << flush;
    BFS(4, A, 8);

    return 0;
}

// struct Queue
// {
//     int front;
//     int rear;
//     int size;
//     int *arr;
// };

// void create(struct Queue *q, int size)
// {
//     q->size = size;
//     q->front = q->rear = -1;
//     q->arr = (int *)malloc(q->size * sizeof(int));
// }

// void enqueue(struct Queue *q, int x)
// {
//     if (q->rear == q->size - 1)
//     {
//         cout << "Queue id Full!!" << endl;
//     }
//     else
//     {
//         q->rear++;
//         q->arr[q->rear] = x;
//     }
// }

// int dequeue(struct Queue *q)
// {
//     int x = -1;
//     if (q->front == q->rear)
//     {
//         cout << "Queue is Empty!!" << endl;
//     }
//     else
//     {
//         q->front++;
//         x = q->arr[q->front];
//     }
//     return x;
// }

// int isempty(struct Queue *q)
// {
//     if (q->front == q->rear)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// void BFS(struct Queue* q,int v, int A[][8], int n)
// {
//     int visited[8]{0};
//     int u;
//     cout << v << " ";
//     visited[v] = 1;
//     enqueue(q,v);
//     while (!isempty(q))
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             u = dequeue(q);
//             if(visited[i] == 0 && A[u][i] == 1){
//                 cout<< i<< " ";
//                 visited[i] = 1;
//                 enqueue(q,i);
//             }
//         }
//     }
// }

// int main()
// {
//     struct Queue * q;
//     create(q,7);
//     int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
//                    {0, 0, 1, 1, 1, 0, 0, 0},
//                    {0, 1, 0, 1, 0, 0, 0, 0},
//                    {0, 1, 1, 0, 1, 1, 0, 0},
//                    {0, 1, 0, 1, 0, 1, 0, 0},
//                    {0, 0, 0, 1, 1, 0, 1, 1},
//                    {0, 0, 0, 0, 0, 1, 0, 0},
//                    {0, 0, 0, 0, 0, 1, 0, 0}};
//     cout<<"Vertex :- 1"<<endl;
//     BFS(q,1,A,8);
//     return 0;
// }

int main()
{
    vector<int> v1, v2;

    v1.assign(5, 10);

    v1.push_back(25);
    v1.push_back(40);
    v1.push_back(30);
    v1.push_back(2);
    v1.insert(v1.begin(), 5);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    
    }
    return 0;
}