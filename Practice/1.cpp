// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         if(max(a,b)<max(c,d)){
//             cout<<"P"<<endl;
//         }
//         else if(max(a,b)>max(c,d)){
//             cout<<"Q"<<endl;
//         }
//         else if (max(a,b)==max(c,d)){
//             cout<<"TIE"<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y;
//         cin>>x>>y;
//         int z = abs(x-y);
//         if(z%2==0){
//             cout<<z/2<<endl;
//         }
//         else{
//             cout<<z<<endl;
//         }
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
//         if(k==1){
//             n%2?cout<<"ODD"<<endl:cout<<"EVEN"<<endl;
//             return;
//         }
//         else if(k==2){
//             cout<<"ODD"<<endl;
//             return;
//         }
//         vector <int> v;
//         for (int i = 0; i < n; i++)
//         {
//             v[i]=i;
//         }

//     }
//     return 0;
// }

// C++ program return last number
// after removing every second
// element from circular array
// #include<iostream>
// using namespace std;

// // Utility function to return last
// // number after removing element
// int removeAlternate(int n)
// {
// 	if (n == 1)
// 		return 1;

// 	if (n % 2 == 0)
// 		return 2
// 			* removeAlternate(n / 2)
// 			- 1;
// 	else
// 		return 2
// 			* removeAlternate(((n - 1) / 2))
// 			+ 1;
// }

// // Driver code
// int main()
// {
// 	int n = 5;
// 	cout << removeAlternate(n) << "\n";

// 	n = 10;
// 	cout << removeAlternate(n) << "\n";

// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         if(k==1){
//             cout<<"YES"<<endl;
//         }
//         else if (n%2==0){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool odd(int n){
//     return n&1;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         if(k==1){
//             if(odd(n)){
//                 cout<<"ODD"<<endl;
//             }
//             else{
//                 cout<<"EVEN"<<endl;
//             }
//         }
//         else if(k==2){
//             cout<<"ODD"<<endl;
//         }
//         else{
//             cout<<"EVEN"<<endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *lchild;
    int data;
    Node *rchild;
} *root = NULL;

void createTree()
{
    queue<Node *> q;
    root = new Node;
    int x;
    cout << "Enter the data of Root Node :- " << endl;
    cin >> x;
    Node *p;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.emplace(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "Enter the Value of Left child data of :- " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            Node *t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.emplace(t);
        }
        cout << "Enter the Value of Right child data of :- " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            Node *t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.emplace(t);
        }
    }
}

void preorder(Node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void inorder(Node *p)
{
    if (p != NULL)
    {
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
}
void postorder(Node *p)
{
    if (p != NULL)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << " ";
    }
}
void levelorder(Node *p)
{
    queue<Node *> q;
    cout << p->data << " ";
    q.emplace(p);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        if (p->lchild)
        {
            cout << p->lchild->data << " ";
            q.emplace(p->lchild);
        }
        if (p->rchild)
        {
            cout << p->rchild->data << " ";
            q.emplace(p->rchild);
        }
    }
}

int main()
{
    createTree();
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelorder(root);
}