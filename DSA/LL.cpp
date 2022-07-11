#include <bits/stdc++.h>
using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;
// }*first=NULL;

// void linkedl(int a[], int n)
// {
//     first = new Node;
//     Node * t,*last;
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

// void display(Node* p)
// {
//     while(p!=NULL){
//         cout<<p->data<<" -> ";
//         p = p->next;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of LL :- " << endl;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     linkedl(a, n);
//     display(first);
//     return 0;
// }

// struct Node
// {
//     int data;
//     Node *next;
// } *first = NULL;

// class create
// {
// public:
//     void set_data(int a[], int n)
//     {
//         cout << "Enter the data for LL :-" << endl;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//     }

//     void create_data(int a[], int n)
//     {
//         first = new Node;
//         Node *last, *t;
//         first->data = a[0];
//         first->next = NULL;
//         last = first;
//         for (int i = 1; i < n; i++)
//         {
//             t = new Node;
//             t->data = a[i];
//             t->next = NULL;
//             last->next = t;
//             last = t;
//         }
//     }

//     void display(Node *p)
//     {
//         while (p != NULL)
//         {
//             if (p->next != NULL)
//             {
//                 cout << p->data << " -> ";
//             }
//             else
//             {
//                 cout << p->data;
//             }
//             p = p->next;
//         }
//     }

//     void R_display(Node *p)
//     {
//         if (p != NULL)
//         {
//             cout << p->data << " -> ";
//             R_display(p->next);
//         }
//     }

//     void Reverse_display(Node *p)
//     {
//         if (p != NULL)
//         {
//             Reverse_display(p->next);
//             cout << p->data << " -> ";
//         }
//     }

//     int count_N(Node *p)
//     {
//         int count = 0;
//         while (p != NULL)
//         {
//             count++;
//             p = p->next;
//         }
//         return count;
//     }

//     void max_min_ele(Node *p)
//     {
//         int max = INT_MIN;
//         int min = INT_MAX;
//         while (p != NULL)
//         {
//             if (p->data > max)
//             {
//                 max = p->data;
//             }
//             if (p->data < min)
//             {
//                 min = p->data;
//             }
//             p = p->next;
//         }
//         cout << "Maximum Element :- " << max << "\t Minimum Element :- " << min << endl;
//     }

//     Node *search(Node *p, int key)
//     {
//         Node *q = NULL;
//         while (p != NULL)
//         {
//             if (key == p->data)
//             {
//                 q->next = p->next;
//                 p->next = first;
//                 first = p;
//             }
//             q = p;
//             p = p->next;
//         }

//         cout << "Modification of LL for Improving searching !!" << endl;
//         cout << "Displaying after Modification :- " << endl;
//         display(first);
//     }

//     Node* rev_ll__grp(Node *p,int grp){
//         int c = 0;
//         Node *prev= NULL,*next,*curr = p;
//         while(curr!=NULL && c<grp){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//             c++;
//         }

//         if(next!=NULL){
//             p->next = rev_ll__grp(next,grp);
//         }
//         return prev;
//     }
// };

// int main()
// {
//     int n;
//     cout << "Enter the Size of LL :-" << endl;
//     cin >> n;
//     int a[n];
//     create obj;
//     obj.set_data(a, n);
//     obj.create_data(a, n);
//     obj.display(first);
//     // cout << "\nTotal Nodes In Linked List :- " << obj.count_N(first) << endl;
//     // cout << "\nMaximum And Minimum Elements in the LL :- " << endl;
//     // obj.max_min_ele(first);
//     // cout << "\n Enter which key You want to search : - " << endl;
//     // int key;
//     // cin >> key;
//     // obj.search(first, key);
//     // cout<<"\n";
//     // obj.R_display(first);
//     // cout<<"\n";
//     // obj.Reverse_display(first);
//     cout<<"\nEnter the size to reverse a ll in group : - "<<endl;
//     int grp;
//     cin>>grp;
//     first = obj.rev_ll__grp(first,grp);
//     obj.display(first);
// }

// #include <iostream>
// #include <queue>
// #include "treenode.h"
// using namespace std;
// treenode<int> *input()
// {
//     int rootdata;
//     cout << "enter data" << endl;
//     cin >> rootdata;
//     treenode<int> *root = new treenode<int>(rootdata);
//     queue<treenode<int> *> q;
//     q.push(root);
//     while (q.size() != 0)
//     {
//         treenode<int> *front = q.front();
//         q.pop();
//         cout << "enter the number of child nodes of the "
//              << " " << front->data << endl;
//         int n;
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             int childdata;
//             cin >> childdata;
//             treenode<int> *child = new treenode<int>(childdata);
//             front->children.push_back(child);
//             q.push(child);
//         }
//     }
//     return root;
// }
// int countleaf(treenode<int> *root)
// {
//     if (root = NULL)
//         return 0;
//     for (int i = 0; i <= root->children.size(); i++)
//     {
//         if (root->children[i] == NULL)
//             return 1;
//         return countleaf(root->children[i]);
//     }
// }
// int main()
// {
//     int max = INT_MAX;
//     treenode<int> *root = input();
//     int x = countleaf(root);
//     cout << "The total number of leaf nodes in the tree are:"
//          << " " << x << endl;
//     return 0;
// }

// int main(){
//     multiset<int> m;
//     m.insert(10);
//     m.insert(10);
//     m.insert(10);
//     m.insert(10);
//     m.insert(20);
//     cout<<m.count(10)<<endl;
//     m.erase(m.find(10));
//     cout<<m.count(10)<<endl;
//     m.erase(10);
//     cout<<m.count(10)<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     Node* left;
//         int data;
//         Node * right ;
//         Node(int data){
//             this->data = data;
//             left = right = NULL;
//         }
// }*root = NULL;

// void createpre(int a[] , int n ){
//         int i = 0;
//         Node* p = root;
//         Node* t;
//         root = new Node(a[i++]);
//         stack <Node*> stk;
//         while(i<n){
//             if(a[i]<root->data){
//                 t = new Node( a[i++]);
//                 p->left = t;
//                 stk.push(p);
//                 p = t;
//             }
//             else{
//                 if(a[i]>p->data && a[i]< (stk.empty()? -1:stk.top()->data)){
//                 t = new Node(a[i++]);
//                 p->right = t;
//                 stk.push(p);
//                 p = t;
//                 }
//                 else{
//                     p = stk.top();
//                     stk.pop();
//                 }
//             }
//         }
// }

// int main(){
//     int a[]= {30, 20, 10, 15, 25, 40, 50, 45};
//     int n = sizeof(a)/sizeof(a[0]);
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n], b[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//         if (n == 1)
//         {
//             a[0] > b[0] ? cout << "YES" << endl : cout << "NO" << endl;
//         }
//         else
//         {
//             int x = *max_element(a,a+n);
//             for(int i =0;i<n;i++){
//                 if(a[i]>b[i]){
//                     a[i] = a[i]-1;
//                 }
//             }
//             int flag = 1;
//             for(int i =0;i<n;i++){
//                 if(a[i]!=b[i]){
//                     flag =0;
//                     break;
//                 }
//             }
//             flag ? cout << "YES" << endl : cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int t, n;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0);
//     cin >> t;
//     while (t--) {
//         cin >> n;
//         if (n % 3 == 0) {
//             cout << n / 3 << ' ' << n / 3 + 1 << ' ' << n / 3 - 1 << endl;
//         }
//         else if (n % 3 == 1) {
//             cout << n / 3 << ' ' << n / 3 + 2 << ' ' << n / 3 - 1 << endl;
//         }
//         else if (n % 3 == 2) {
//             cout << n / 3 + 1 << ' ' << n / 3 + 2 << ' ' << n / 3 - 1 << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     int a[n],b[n];
//         for (int i = 1; i <= n; i++) cin >> a[i];
//         for (int i = 1; i <= n; i++) cin >> b[i];
//         int cnt;
//         bool check = false;
//         for (int i = 1; i <= n; i++) {
//             if (b[i] == 0) continue;
//             else if (a[i] < b[i]) {
//                 cout << "NO" << endl;
//                 return;
//             }
//             else {
//                 if (!check) {
//                    cnt = a[i] - b[i];
//                    check = true;
//                 }
//                 else {
//                     if (cnt != a[i] - b[i]) {
//                         cout << "NO" << endl;
//                         return;
//                     }
//                 }
//             }
//         }
//         cout << "YES" << endl;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//             solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n], b[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//         if (n == 1)
//         {
//             a[0] > b[0] ? cout << "YES" << endl : cout << "NO" << endl;
//         }
//         else
//         {
//             // int c[n];
//             // for (int i = 0; i < n; i++)
//             // {
//             //     if(a[i]>b[i]){
//             //         c[i] = a[i]-b[i];
//             //     }
//             // }

//             for(int i =0;i<n;i++){
//                 if(a[i]>b[i]){
//                     a[i] = a[i]-1;
//                 }
//             }
//             int flag = 1;
//             for(int i =0;i<n;i++){
//                 if(a[i]!=b[i]){
//                     flag =0;
//                     break;
//                 }
//             }
//             flag ? cout << "YES" << endl : cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 5e4 + 5;
// int a[N], b[N], n, t;
// void solve()
// {
//     cin >> n;
//         for (int i = 1; i <= n; i++) cin >> a[i];
//         for (int i = 1; i <= n; i++) cin >> b[i];
//         int cnt;
//         bool check = false;
//         for (int i = 1; i <= n; i++) {
//             if (b[i] == 0) continue;
//             else if (a[i] < b[i]) {
//                 cout << "NO" << endl;
//                 return;
//             }
//             else {
//                 if (!check) {
//                    cnt = a[i] - b[i];
//                    check = true;
//                 }
//                 else {
//                     if (cnt != a[i] - b[i]) {
//                         cout << "NO" << endl;
//                         return;
//                     }
//                 }
//             }
//         }
//         cout << "YES" << endl;
// }
// int main()
// {
//     cin >> t;
//     while (t--) {
//             solve();
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         string s;
//         cin>>s;
//         int count =0;
//         for(int i =0;i<k;i++){
//             if(s[i]=='W'){
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long long int lli;
// #define vpp vector<PP>
// #define vll vector<ll>
// #define f(i,s,e) for(long long int i=s;i<e;i++)

// lli M=1000000007;
// lli min(lli a,lli b) { if(a<b) return a; return b;}
// lli max(lli a,lli b) { return (a>b)?a:b;}
// void solve(){
//     ll n,k; cin>>n>>k;
//     string s; cin>>s;
//     vll pre(n,0);
//     pre[0]=((s[0]=='W')?1:0);
//     f(i,1,n){
//         pre[i]=pre[i-1]+((s[i]=='W')?1:0);
//     }
//     ll ans=1e18;
//     f(i,0,n){
//         if(i+k-1<n){
//             ll t=pre[i+k-1]-((i-1>=0)?pre[i-1]:0);
//             ans=min(ans,t);
//         }
//     }
//     cout<<ans<<endl;
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t=1;
//     cin>>t;
//     while(t--) solve();
//     return 0;
// }

// struct Node
// {
//     int data;
//     Node *lchild;
//     Node *rchild;
//     Node(int data)
//     {
//         this->data = data;
//         lchild = NULL;
//         rchild = NULL;
//     }
// } * root;

// void createBST(Node *t, int key)
// {
//     if (t == NULL)
//     {
//         t = new Node(key);
//         root = t;
//         return;
//     }
//     else
//     {
//         Node *r = NULL;
//         Node *p;
//         while (t != NULL)
//         {
//             r = t;
//             if (key == t->data)
//             {
//                 return;
//             }
//             else if (key < t->data)
//             {
//                 t = t->lchild;
//             }
//             else
//             {
//                 t = t->rchild;
//             }
//         }
//         p = new Node(key);
//         if (p->data < r->data)
//         {
//             r->lchild = p;
//         }
//         else
//         {
//             r->rchild = p;
//         }
//     }
// }
// int Height(Node* p){
//     if(p==NULL){
//         return 0;
//     }
//     int x,y;
//     x = Height(p->lchild);
//     y = Height(p->rchild);
//     return x>y? x+1:y+1;
// }
// Node* InPre(Node* p){
//     while(p&&p->rchild!=NULL){
//         p=p->rchild;
//     }
//     return p;
// }
// Node* InSucc(Node* p){
//     while(p&&p->lchild!=NULL){
//         p=p->lchild;
//     }
//     return p;
// }

// Node* Delete(Node* p,int key){
//     Node* q;

//     if (p == NULL){
//         return NULL;
//     }

//     if (p->lchild == NULL && p->rchild == NULL){
//         if (p == root){
//             root = NULL;
//         }
//         delete p;
//         return NULL;
//     }

//     if (key < p->data){
//         p->lchild = Delete(p->lchild, key);
//     } else if (key > p->data){
//         p->rchild = Delete(p->rchild, key);
//     } else {
//         if (Height(p->lchild) > Height(p->rchild)){
//             q = InPre(p->lchild);
//             p->data = q->data;
//             p->lchild = Delete(p->lchild, q->data);
//         } else {
//             q = InSucc(p->rchild);
//             p->data = q->data;
//             p->rchild = Delete(p->rchild, q->data);
//         }
//     }
//     return p;
// }

// void inorder(Node *p)
// {
//     if (p)
//     {
//         inorder(p->lchild);
//         cout << p->data << " ->";
//         inorder(p->rchild);
//     }
// }
// void levelorder(Node *p)
// {
//     queue<Node *> q;
//     cout<<p->data<<" ";
//     q.emplace(p);
//     while (!q.empty())
//     {
//         p = q.front();
//         q.pop();
//         if(p->lchild){
//             cout<<p->lchild->data<<" ";
//             q.emplace(p->lchild);
//         }
//         else if(p->rchild){
//             cout<<p->rchild->data<<" ";
//             q.emplace(p->rchild);
//         }
//     }
// }
// int main()
// {
//     createBST(root, 50);
//     createBST(root, 30);
//     createBST(root, 20);
//     createBST(root, 25);
//     inorder(root);
//     cout<<endl;
//     levelorder(root);
//     delete
// }

// #include <bits/stdc++.h>

// using namespace std;

// struct node
// {
//     int data;
//     struct node *left, *right;
// };

// vector<vector<int>> findVertical(node *root)
// {
//     map<int, map<int, multiset<int>>> nodes;
//     queue<pair<node *, pair<int, int>>> todo;
//     todo.push({root, {0, 0}}); // initial vertical and level
//     while (!todo.empty())
//     {
//         auto p = todo.front();
//         todo.pop();
//         node *temp = p.first;

//         // x -> vertical , y->level
//         int x = p.second.first, y = p.second.second;
//         nodes[x][y].insert(temp->data); // inserting to multiset

//         if (temp->left)
//         {
//             todo.push({temp->left, {x - 1, y + 1}});
//         }
//         if (temp->right)
//         {
//             todo.push({temp->right, {x + 1, y + 1}});
//         }
//     }
//     vector<vector<int>> ans;
//     for (auto p : nodes)
//     {
//         vector<int> col;
//         for (auto q : p.second)
//         {
//             col.insert(col.end(), q.second.begin(), q.second.end());
//         }
//         ans.push_back(col);
//     }
//     return ans;
// }

// struct node *newNode(int data)
// {
//     struct node *node = (struct node *)malloc(sizeof(struct node));
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;

//     return (node);
// }

// int main()
// {

//     struct node *root = newNode(1);
//     root->left = newNode(2);
//     root->left->left = newNode(4);
//     root->left->right = newNode(10);
//     root->left->left->right = newNode(5);
//     root->left->left->right->right = newNode(6);
//     root->right = newNode(3);
//     root->right->left = newNode(9);
//     root->right->right = newNode(10);

//     vector<vector<int>> verticalTraversal;
//     verticalTraversal = findVertical(root);

//     cout << "The Vertical Traversal is : " << endl;
    // for (auto vertical : verticalTraversal)
    // {
    //     for (auto nodeVal : vertical)
    //     {
    //         cout << nodeVal << " ";
    //     }
    //     cout << endl;
    // }
//     return 0;
// }

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
    Node(int data)
    {
        this->data = data;
        lchild = NULL;
        rchild = NULL;
    }
} *root = NULL;
map<int, map<int, multiset<int>>> t;

Node *createBtree()
{
    queue<Node *> q;
    int data;
    cout << "Enter the data for Root: ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        root = new Node(data);
    }
    Node *p = root;
    q.emplace(p);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        int x;
        cout << "Enter the Value for Left Child of " << p->data << " : ";
        cin >> x;
        if (x != -1)
        {
            p->lchild = new Node(x);
            q.emplace(p->lchild);
        }
        cout << "Enter the Value for Right Child of " << p->data << " : ";
        cin >> x;
        if (x != -1)
        {
            p->rchild = new Node(x);
            q.emplace(p->rchild);
        }
    }
    return root;
}

void inorder(Node *p)
{
    if (p)
    {
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
}
void solve(Node *p, int x, int y)
{
    if (!p)
    {
        return;
    }
    t[x][y].insert(p->data);
    solve(p->lchild, x - 1, y + 1);
    solve(p->rchild, x + 1, y + 1);
}
void verticalT(Node *root)
{
    solve(root, 0, 0);
    vector<vector<int>> v;

    for (auto m1 : t)
    {
        v.push_back(vector<int>());
        for (auto m2 : m1.second)
        {
            for (auto m3 : m2.second)
                v.back().push_back(m3);
        }
    }

    for (auto vertical : v)
    {
        for (auto nodeVal : vertical)
        {
            cout << nodeVal << " ";
        }
        cout << endl;
    }
}

void rightV(Node* p , int level,vector<int> &v){
    if(!p){
        return;
    }
    if(level == v.size()){
        v.push_back(p->data);
    }
    rightV(p->rchild,level+1,v); 
    rightV(p->lchild,level+1,v); 
}

void leftV(Node* p , int level,vector<int> &v1){
    if(!p){
        return;
    }
    if(level == v1.size()){
        v1.push_back(p->data);
    }
    rightV(p->lchild,level+1,v1); 
    rightV(p->rchild,level+1,v1); 
}

int main()
{
    createBtree();
    // inorder(root);
    // cout<<endl;
    // verticalT(root);
    // cout<<endl;
    vector<int> v;
    rightV(root,0,v);
    for (auto p: v)
    {
        cout<<p <<" ";
    }
    cout<<endl;
    vector<int> v1;
    leftV(root,0,v1);
    for (auto p: v1)
    {
        cout<<p <<" ";
    }
    cout<<endl;
    return 0;
}