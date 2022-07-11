#include <bits/stdc++.h>
using namespace std;

// struct Node
// {
//     Node* next;
//     int data;
//     Node *next;
// } *first = NULL;

// int main(){

//     return 0;
// }

// void set_data(int a[], int n)
// {
//     cout << "Enter the data for LL :-" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
// }

// void create_data(int a[], int n)
// {
//     first = new Node;
//     Node *last, *t;
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

// void display(Node *p)
// {
//     while (p != NULL)
//     {
//         if (p->next != NULL)
//         {
//             cout << p->data << " -> ";
//         }
//         else
//         {
//             cout << p->data;
//         }
//         p = p->next;
//     }
// }

// Node *rev_ll_grp(Node *p, int grp)
// {
//     int c = 0;
//     Node *prev = NULL, *next, *curr = p;
//     while (curr != NULL && c < grp)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         c++;
//     }

//     if (next != NULL)
//     {
//         p->next = rev_ll_grp(next, grp);
//     }
//     return prev;
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of LL : - " << endl;
//     cin >> n;
//     int a[n];
//     set_data(a, n);
//     create_data(a, n);
//     // display(first);
//     first = rev_ll_grp(first, 3);
//     display(first);
//     return 0;
// }

// struct ListNode
// {
//     int val;
//     ListNode *next;
// };

// class Solution
// {
// public:
//     ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
//     {
//         // if list1 happen to be NULL
//         // we will simply return list2.
//         if (l1 == NULL)
//         {
//             return l2;
//         }

//         // if list2 happen to be NULL
//         // we will simply return list1.
//         if (l2 == NULL)
//         {
//             return l1;
//         }

//         // if value pointend by l1 pointer is less than equal to value pointed by l2 pointer
//         // we wall call recursively l1 -> next and whole l2 list.
//         if (l1->val <= l2->val)
//         {
//             l1->next = mergeTwoLists(l1->next, l2);
//             return l1;
//         }
//         // we will call recursive l1 whole list and l2 -> next
//         else
//         {
//             l2->next = mergeTwoLists(l1, l2->next);
//             return l2;
//         }
//     }
// };

// int main(){
//     int a[]={2,3,4,5,6,7,8};
//     reverse(a,a+7);
//     for (int i = 0; i < 7; i++)
//     {
//         cout<<a[i]<<" ";
//     }

// // }
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         stack<ListNode*> stk1;
//         while(headA!=NULL){
//             stk1.push(headA);
//             headA=headA->next;
//         }
//         stack<ListNode*> stk2;
//         while(headB!=NULL){
//             stk2.push(headB);
//             headB=headB->next;
//         }
//         ListNode* p;
//         while((stk1.top() == stk2.top())&&(stk1.size()>0 && stk2.size()>0)){
//             p = stk1.top();
//             stk1.pop();
//             stk2.pop();
//         }
//         return p;
//     }
// };

// int count = 0;
//         ListNode* p = head;
//         while(p!=NULL){
//             count++;
//             p=p->next;
//         }
//         int m =0;
//         count%2 ? m = count/2 +1 : m = count/2;
//         ListNode* q=NULL;
//         p = head;
//         while(m){
//             q = p;
//             p=p->next;
//             m--;
//         }
//         q->next = NULL;
//         int x = 0;
//         m%2? x = m-1 : x = m;
//         int a[x];
//         int i =0;
//         while(p!=NULL){
//             a[i++]=p->val;
//             p=p->next;
//         }
//         reverse(a,a+x);
//         ListNode* head2 = new ListNode(a[0]);
//         ListNode* c = head2;
//         for(int i =0;i<x ;i++){
//             ListNode* t = new ListNode(a[i]);
//             c->next = t;
//             c = t;
//         }
//         p = head;
//         c = head2;
//         q = p;
//         p=p->next;
//         ListNode*d = NULL;
//         d = c;
//         c = c->next;
//         while(p!=NULL){
//             q->next = d;
//             d->next = p;
//             q =p;
//             p=p->next;
//             d = c;
//             c = c->next;
//         }
//         p = head;
//         return head;

// ListNode* p = head;
//         ListNode* q = NULL;
//         int count =0;
//         while(p!=NULL){
//             if(p->val <x){
//                 count++;
//             }
//             p=p->next;
//         }
//         p=head;
//         if(count==0){return head;}
//         int a[count];
//         int i =0;
//         while(p!=NULL){
//             if(p->val<x){
//                 a[i++]=p->val;
//             }
//             p=p->next;
//         }
//         while(head->val<x&&head!=NULL){head=head->next;}
//         if(!head || !head->next){return head;}
//         p = head;
//         q=p;
//             p=p->next;
//         while(p!=NULL){
//             if(p->val<x){
//                 q->next = p->next;
//                 delete p;
//                 p = q->next;
//             }
//             else{
//                q=p;
//             p=p->next; 
//             }
//         }
//         ListNode* list = new ListNode(a[0]);
//         ListNode* m=list;
//         for(int i =1;i<count;i++){
//             ListNode* t = new ListNode(a[i]);
//             m->next =t;
//             m = t;
//         }
//         m->next = head;
//         head = list;
//         return head;

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//     int data;
//     node *next;
//     node(int x)
//     {
//         this->data = x;
//         next = NULL;
//     }
// };
// int intersection(node *head1, node *head2)
// {
//     node *ptr1 = head1;
//     node *ptr2 = head2;
//     int c1 = 0;
//     int c2 = 0;
//     while (ptr1 != NULL)
//     {
//         c1++;
//         ptr1 = ptr1->next;
//     }
//     while (ptr2 != NULL)
//     {
//         c2++;
//         ptr2 = ptr2->next;
//     }
//     int x = abs(c1 - c2);
//     ptr1 = head1;
//     ptr2 = head2;
//     if (c1 > c2)
//     {
//         while (x--)
//             ptr1 = ptr1->next;
//     }
//     else
//     {
//         while (x--)
//             ptr2 = ptr2->next;
//     }
//     while (ptr1 != ptr2)
//     {
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }
//     if (ptr1 != NULL)
//         return (ptr1->data);
//     else
//         return -1;
// }
// node *takeinput()
// {
//     int data;
//     cin >> data;
//     node *head = NULL;
//     while (data != -1)
//     {
//         node *newnode = new node(data);
//         if (head == NULL)
//             head = newnode;
//         else
//         {
//             node *temp = head;
//             while (temp->next != NULL)
//                 temp = temp->next;
//             temp->next = newnode;
//         }
//         cin >> data;
//     }
//     return head;
// }
// void print(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }
// int main()
// {
//     node *head1 = takeinput();
//     node *head2 = takeinput();
//     print(head1);
//     cout<<endl;
//     print(head2);
//     cout<<endl;
//     cout << "the intersection point of the linked list is" << intersection(head1, head2);
//     return 0;
// }

// vector<long long> solve(int A, vector<vector<int> > &B) {
//     vector<long long > v;
//     vector<long long> v1(A,0);
//     vector<long long> v2(A,0);
//     for(int i =0;i<B.size();i++){
//             if(B[i][0]==1){
//                 for(int k = B[i][1]-1;k<=B[i][2];k++){
//                     v1[k]=v1[k]^1;
//                 }
//             }
//             else if(B[i][0]==2){
//                 for(int k = 0;k<v2.size();k++){
//                     v2[k]=v2[k]+B[i][1]*v1[k];
//                 }
//             }
//             else if(B[i][0]==3){
//                 v.push_back(v2[B[i][1]-1]);
//             }
//         }
//     return v;
// }
// int main(){
//     vector<int> v;
//     vector<vector<int>> x;
//     x = [[1,2,3],[2,5,0],[1,1,4],[3,4,0],[3,1,0]];
//     v = solve(5,x);
// }




