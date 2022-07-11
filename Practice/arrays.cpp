#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if( n%i == 0){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// int main(){
//     int a,b,y,x;
//     cin>>a>>b;
//     x = min(a,b);
//     y = 1;
//     for(int i =1;i<=x;i++){
//         if( a%i ==0 && b%i ==0){
//             y =i;
//         }
//     }
//     cout<<"GCD  = "<<y<<endl;
// }

// int main(){
//     int a,b,x,y,ans;
//     cin>>a>>b;
//     x = max(a,b);
//     y = a*b;
//     ans = x;
//     for(int i =x;i<=y;i++){
//         if(i%a ==0 && i%b ==0){
//             ans =i;
//             break;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// int main(){
//     int n ;
//     cout<<"Enter the decimal number for binary conversion:-";
//     cin>>n;
//     string x = "";
//     int t;
//     while(n>0){
//          t = n%2;
//          x = x + to_string(t);
//          n=n/2;
//     }
//     reverse(x.begin(),x.end());
//     cout<<x;
// }

// int main()
// {
//     int n,x;
//     cout << "Enter the number of element to be inserted in array:-";
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i <= n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Enter the element to be searched:-";
//     cin >> x;
//     for (int i = 0; i <= n; i++)
//     {
//         if (x == arr[i])
//         {
//             cout<<"Element is present at position = "<<i+1<<endl;
//         }
//     }
//     return 0;
// }
// int setbit(int n){
//     int ans=0;
//     while(n>0){
//         ans++;
//         n=n>>1;
//     }
//     return ans;
// }
// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int N;
//         cin >> N;
//         int n = setbit(N);
//         cout<<n<<endl;
//     }
// }

// int main(){
//     int test;
//     cin>>test;
//     while(test--){
//         int n;
//         cin>>n;
//         if(n ==0){
//         cout<<1<<endl;
//         }
//         else if(n ==1 || n ==2){
//             cout<<2<<endl;
//         }
//         else{
//             int sum =1;
//             while(2*sum>=n)
//             sum = sum*2;
//             if(sum==n){
//                 cout<<n<<endl;
//             }
//             else if(n == (2*sum-1)){
//                 cout<<n+1<<endl;
//             }
//             else{
//                 cout<<sum<<endl;
//             }
//         }
//     }
//     return 0;
// }

// int funct(int n,int d){
//     int N =n,c=0,newn=0,rem;
//     while(N>0){
//         rem = N%10;
//         N = N/10;
//         c++;
//         if(rem == d){
//             N = N*pow(10,c)+(rem+1)*pow(10,c-1);
//             newn = N-n;
//             c=0;
//         }
//         return newn;
//     }
// }

// int main(){
//     int test;
//     cin>>test;
//     while(test--){
//         int n,d;
//         cin>>n>>d;
//        cout<<funct(n, d)<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int isMin(int n, int d){
//     int newN = n, rem , count =0, c = 0;
//     while(newN>0){
//         rem = newN % 10;
//         newN = newN /10;
//         c++;
//         if(rem == d){
//             newN = newN*pow(10,c)+(rem+1)*pow(10,c-1);
//             count = newN -n;
//             c = 0;
//         }
//     }
//     return count;
// }

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n, d;
// 	    cin>>n>>d;
// 	    cout<<isMin(n, d)<<endl;
// 	}
// 	return 0;
// }

// int main(){
// string str;
// getline(cin,str);
// int x = str.length();
// while(x>=0){
//     cout<<str[x];
//     x--;
// }
// return 0;

//palindrome

// string str;
// cin>>str;
// int x = 0;
// int y = str.length()-1;
// while(x<y){
//     if(str[x]!=str[y]){
//         cout<<"No"<<endl;
//         return 0;
//     }
//     else{
//         x++;
//         y--;
//     }
// }
// cout<<"Yes"<<endl;
// return 0;

// binary to decimal

// string x;
// cin>>x;
// int y = x.length()-1;
// int base =1;
// int num=0;
// for(int i =y;i>=0;i--){
//     num = num + ((int)x[i]-'0')*base;
//     base = base*2;
// }
// cout<<num<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int isMin(int n, int d){
//     int newN = n, rem , count =0, c = 0;
//     while(newN>0){
//         rem = newN % 10;
//         newN = newN /10;
//         c++;
//         if(rem == d){
//             newN = newN*pow(10,c)+(rem+1)*pow(10,c-1);
//             count = newN -n;
//             c = 0;
//         }
//     }
//     return count;
// }

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n, d;
// 	    cin>>n>>d;
// 	    cout<<isMin(n, d)<<endl;
// 	}
// 	return 0;
// }

// int main(){
//     int n,temp;
//     cout<<"Enter the size of Array:-"<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<=n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Initial array:-"<<endl;
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }

//     for(int i=0;i<=n;i++){
//         if(arr[i]>arr[i+1]){
//             temp = arr[i];
//            arr[i]= arr[i+1];
//             arr[i+1]=temp ;
//         }
//     }

//     cout<<"\nSorted array:-"<<endl;
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// int main(){
//     int n,temp,ele,ind;
//     cout<<"Enter the size of Array:-"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element:-"<<endl;
//     for(int i =0;i<=n;i++){
//         cin>>arr[i];
//     }

//     cout<<"\nInitial array:-"<<endl;
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<"\nEnter element to insert:-"<<endl;
//     cin >> ele;
//     cout<<"Insert at which index:-"<<endl;
//     cin >> ind;
//     n++;
//     for(int i=n;i>=ind;i--)
//         arr[i]=arr[i-1];

//         arr[ind-1] =ele;

//     cout<<"Inserted array:-"<<endl;
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// int main()
// {
//     int n, temp, ele, ind;
//     cout << "Enter the size of Array:-" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the element:-" << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "\nInitial array:-" << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << "\nEnter element to delete:-" << endl;
//     cin >> ele;
//     int s;
//     for (int i = 0; i <= n; i++)
//     {
//         if (arr[i] == ele)
//         {
//             s = i;
//             for (int i = s; i <= n - 1; i++)
//             {
//                 arr[i]=arr[i+1];
//             }
//             n--;
//             break;
//         }
//     }

//     cout << "Array after deletion:-" << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// int search(int arr[], int n, int ele)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         if (arr[i] == ele)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// void sorted(int arr[], int n)
// {
//     int temp;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = i + 1; i <= n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int binarysearch(int arr[], int n, int ele)
// {
//     int low, mid, high;
//     low = 0;
//     high = n - 1;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == ele)
//         {
//             return mid;
//         }
//         if (arr[mid] < ele)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// void funct(int n){
//     if(n>0){
//         funct(n-1);
//         cout<<n<<endl;
//     }
// }
// int main(){
//     int n =3;
//     funct(n);
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of the Array:-" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the element" << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Displaying unsorted Array:-" << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     int ele;
//     cout << "\nEnter the element to be searched:-" << endl;
//     cin >> ele;

//     // search(arr, n, ele);
//     sort(arr, arr + n);
//     // sorted(arr, n);
//     cout << "Displaying sorted Array:-" << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     int x = binarysearch(arr, n, ele);
//     cout << "\nElement " << ele << " is found at " << x << " index." << endl;
//     return 0;
// }
#include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void display(struct Node* ptr){
//     while(ptr!=NULL){
//         cout<<"Element :"<<ptr->data<<endl;
//         ptr =  ptr->next;
//     }
// }

// struct Node* insertatfirst(struct Node* head,int data){
//     struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//     ptr->next=head;
//     ptr->data=data;
//     return ptr;
// }

// struct Node* insertatIndex(struct Node* head,int data,int index){
//     struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* p = head;
//     int i =0;
//     while(i!=index-1){
//         p = p->next;
//         i++;
//     }
//     ptr->data=data;
//     ptr->next=p->next;
//     p->next=ptr;
//     return head;
// }

// int main()
// {
//     struct Node* head,*first,*second,*third,*fourth;

//     head= (struct Node*)malloc(sizeof(struct Node));
//     first = (struct Node*)malloc(sizeof(struct Node));
//     second = (struct Node*)malloc(sizeof(struct Node));
//     third = (struct Node*)malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));

//     head->data = 1;
//     head->next = first;

//     first->data = 2;
//     first->next = second;

//     second->data = 3;
//     second->next = third;

//     third->data = 4;
//     third->next = fourth;

//     fourth->data =5;
//    fourth->next = NULL;

//     display(head);
//     // head = insertatfirst(head,23);
//     head = insertatIndex(head,23,3);
//     display(head);
//     return 0;
// }

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// struct Node *InsertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     ptr->next = head;
//     return ptr;
// }

// struct Node *InsertAtIndex(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }

// struct Node *InsertAtEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     struct Node *p = head;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }

// struct Node *InsertAfterNode(struct Node *head, struct Node *ptrp, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     ptr->next = ptrp->next;
//     ptrp->next = ptr;
// }

// struct Node *DeleteAtFirst(struct Node *head)
// {
//     struct Node *ptr = head;
//     head = head->next;
//     free(ptr);
//     return head;
// }

// void traversingLinkedList(struct Node *ptr)
// {

//     while (ptr != NULL)
//     {
//         cout << "Element :- " << ptr->data << endl;
//         ptr = ptr->next;
//     }
// }

// int main()
// {
//     struct Node *head, *first, *second, *third, *fourth;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 1;
//     head->next = first;

//     first->data = 2;
//     first->next = second;

//     second->data = 3;
//     second->next = third;

//     third->data = 4;
//     third->next = fourth;

//     fourth->data = 5;
//     fourth->next = NULL;

//     cout << "Before any changes :-" << endl;
//     traversingLinkedList(head);

//     // cout<<"\n Inserting at Head"<<endl;
//     // head = InsertAtFirst(head,24);
//     // traversingLinkedList(head);

//     // cout<<"\n Inserting at user define Index"<<endl;
//     // int n;
//     // cout<<"Enter the Index:-"<<endl;
//     // cin>>n;
//     // InsertAtIndex(head,34,n);
//     // traversingLinkedList(head);

//     // cout << "After changes:-" << endl;
//     // head = InsertAtEnd(head, 100);
//     // traversingLinkedList(head);

//     // head = InsertAfterNode(head, second, 89);
//     // traversingLinkedList(head);

//     cout << "After changes:-" << endl;
//     head = DeleteAtFirst(head);
//     traversingLinkedList(head);

//     return 0;
// }

// struct Node
// {
//     int num;
//     struct Node *next;
// };
// void display(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         cout << "Element : " << ptr->num << endl;
//         ptr = ptr->next;
//     }
// }

// struct Node *InsertAtHead(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->num = data;
//     ptr->next = head;
//     return ptr;
// }
// struct Node *InserAtIndex(struct Node *head, int data, int ind)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node* p = head;
//     int i=0;
//     while(i!=ind-1){
//         p=p->next;
//         i++;
//     }
//     ptr->num=data;
//     ptr->next=p->next;
//     p->next=ptr;
//     return head;
// }

// struct Node* InsertAtEnd(struct Node* head,int data){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->num=data;
//     struct Node* p = head;
//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next=ptr;
//     ptr->next=NULL;
//     return head;
// }

// int main()
// {
//     struct Node *head, *first, *second, *third, *fourth;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     head->num = 1;
//     head->next = first;

//     first->num = 11;
//     first->next = second;

//     second->num = 13;
//     second->next = third;

//     third->num = 18;
//     third->next = fourth;

//     fourth->num = 10;
//     fourth->next = NULL;

//     //calling function to insert node at head or first;
//     cout << "\nDisplaying Element without any changes:" << endl;
//     display(head);
//     head = InsertAtEnd(head, 90);
//     cout << "\nDisplaying Element after Inserting:-" << endl;
//     display(head);

//     return 0;
// }
///
//
//
//
//////

//
//
//
//

///

// struct Node{
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };

// void traversingLinkedList(struct Node* head){
//     struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
//     struct Node * p = head;
//     while(p!=NULL){
//         cout<<"Element : "<<p->data<<endl;
//         p=p->next;
//         continue;
//         p=p->prev;
//     }
//     // do{
//     //     cout<<"Element :- "<<p->data<<endl;
//     //     p = p->prev;
//     // }while(p!=NULL);
// }

// int main(){
//     struct Node* head,*first,*second,*third,*fourth;
//     head = (struct Node*)malloc(sizeof(struct Node));
//     first  = (struct Node*)malloc(sizeof(struct Node));
//     second = (struct Node*)malloc(sizeof(struct Node));
//     third = (struct Node*)malloc(sizeof(struct Node));
//     fourth  = (struct Node*)malloc(sizeof(struct Node));

//     head->data = 1;
//     head->next= first;
//     head->prev=NULL;

//     first->data=3;
//     first->next=second;
//     first->prev = head;

//     second->data=5;
//     second->next=third;
//     second->prev = first;

//     third->data=7;
//     third->next=fourth;
//     third->prev = second;

//     fourth->data=9;
//     fourth->next=NULL;
//     fourth->prev = third;

//     cout<<"Displaying linked List :-"<<endl;
//     traversingLinkedList(head);
//     return 0;
// }
#include <stdio.h>

// void sorted(int arr[], int n)
// {
//     int temp;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = i + 1; i <= n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int BinarySearch(int arr[], int n, int ele)
// {
//     int low, mid, high;
//     low = 0;
//     high = n - 1;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == ele)
//         {
//             return mid;
//         }
//         if (arr[mid] < ele)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// void funct(int n){
//     if(n>0){
//         funct(n-1);
//         cout<<n<<endl;
//     }
// }
// int main(){
//     int n =3;
//     funct(n);
// }

// void sorted(int arr[], int n)
// {
//     int temp;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = i + 1; i <= n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int binarysearch(int arr[], int n, int ele)
// {
//     int low, mid, high;
//     low = 0;
//     high = n - 1;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == ele)
//         {
//             return mid;
//         }
//         if (arr[mid] < ele)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of the Array:-" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the element" << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Displaying unsorted Array:-" << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     sorted(arr,n);
//     cout << "Displaying sorted Array:-" << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     int ele;
//     cout << "\nEnter the element to be searched:-" << endl;
//     cin >> ele;
//     int x = binarysearch(arr, n, ele);
//     cout << "\nElement " << ele << " is found at " << x << " index." << endl;
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
// void sorted(int arr[], int n)
// {
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int BinarySearch(int arr[], int n, int ele)
// {
//     int mid, low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == ele)
//         {
//             return mid;
//         }
//         else if (arr[mid] < ele)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int n;
//     printf("Enter the size of Array:-\n");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elment in Array:-\n");
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     sorted(arr, n);
//     int ele;
//     printf("Enter the elemnt to be searched :-\n");
//     cin>>ele;
//     int x = BinarySearch(arr, n, ele);
//     printf("Element %d is found at %d index.\n", ele, x+1);
//     return 0;
// }

#include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     printf("Enter the size of Array:-\n");
//     cin >> n;
//     printf("Enter the element for Player A :-\n");
//     int a1[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a1[i];
//     }
//     printf("Enter the element for Player B :-\n");
//     int a2[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a2[i];
//     }

//     int rslt[n];
//     for (int i = 0; i < n; i++)
//     {
//         if (a1[i] > a2[(n - 1) - i])
//         {
//             rslt[i] = 1;
//         }
//         else if (a1[i] < a2[(n - 1) - i])
//         {
//             rslt[i] = 2;
//         }
//         else
//         {
//             rslt[i] = 0;
//         }
//     }
//     printf("Result :- \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf( "%d ",rslt[i]);
//     }

//     return 0;
// }
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
using namespace std;
// int countDistinct(int ary[], int t)
// {
// 	int dist_count = 0;
// 	for (int i = 0; i < t; i++) {
// 		int j;
// 		for (j = 0; j < i; j++)
// 			if (ary[i] == ary[j])
// 				break;
// 		if (j == i)
// 			dist_count++;
// 	}
// 	return dist_count;
// }
// void Distinct(int arr[], int n, int t)
// {
// 	for (int i = 0; i <= n - t; i++)
// 		cout << countDistinct(arr + i, t) << endl;
// }

// int main()
// {
// 	int arr[] = { 1,2,3,6,1,2,5,3,8,4,5,9}, t = 5;
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	Distinct(arr, n, t);
// 	return 0;
// }

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int findMax(int A[], int n)
// {
//     int max = INT32_MIN;
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         if (A[i] > max)
//             max = A[i];
//     }
//     return max;
// }
// void CountSort(int A[], int n)
// {
//     int i, j, max, *C;

//     max = findMax(A, n);
//     C = (int *)malloc(sizeof(int) * (max + 1));

//     for (i = 0; i < max + 1; i++)
//     {
//         C[i] = 0;
//     }
//     for (i = 0; i < n; i++)
//     {
//         C[A[i]]++;
//     }

//     i = 0;
//     j = 0;
//     while (j < max + 1)
//     {
//         if (C[j] > 0)
//         {
//             A[i++] = j;
//             C[j]--;
//         }
//         else
//             j++;
//     }
// }
// int main()
// {
//     int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;

//     CountSort(A, n);

//     for (i = 0; i < 10; i++)
//         printf("%d ", A[i]);
//     printf("\n");

//     return 0;
// }
// int partition(int arr[], int l, int h)
// {
//     int pvt = arr[l], t;
//     int i = l + 1;
//     for (int j = l + 1; j <= h ; j++)
//     {
//         if (arr[j] < pvt)
//         {
//             if (j != i)
//             {
//                 t = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = t;
//             }
//             i++;
//         }
//     }
//     arr[l] = arr[i - 1];
//     arr[i - 1] = pvt;
//     return (i - 1);
// }

// void quicksort(int a[], int low, int high)
// {
//     if (low < high)
//     {
//         int pi = partition(a, low, high);
//         quicksort(a, low, pi - 1);
//         quicksort(a, pi + 1, high);
//     }
// }

// int main()
// {
//     int n ;
//     cout<<("Enter the size of Array:-")<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"ENter the elemnt in Array:-"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     quicksort(arr, 0, n - 1);
//     cout<<"Sorting after changes:-\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int partition(int A[], int l, int h)
// {
//     int pivot = A[l];
//     int i = l, j = h;
//     do
//     {
//         do
//         {
//             i++;
//         } while (A[i] <= pivot);
//         do
//         {
//             j--;
//         } while (A[j] > pivot);
//         if (i < j)
//             swap(&A[i], &A[j]);
//     } while (i < j);
//     swap(&A[l], &A[j]);
//     return j;
// }
// void QuickSort(int A[], int l, int h)
// {
//     int j;
//     if (l < h)
//     {
//         j = partition(A, l, h);
//         QuickSort(A, l, j);
//         QuickSort(A, j + 1, h);
//     }
// }
// int main()
// {
//     int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;
//     QuickSort(A, n);
//     for (i = 0; i < 10; i++)
//         printf("%d ", A[i]);
//     printf("\n");
//     return 0;
// }

// struct Node
// {
//     int data;
//     struct Node *next;
// } *top = NULL;
// void push(int x)
// {
//     struct Node *t;
//     t = (struct Node *)malloc(sizeof(struct Node));

//     if (t == NULL)
//         printf("stack is full\n");
//     else
//     {
//         t->data = x;
//         t->next = top;
//         top = t;
//     }
// }
// int pop()
// {
//     struct Node *t;
//     int x = -1;

//     if (top == NULL)
//         printf("Stack is Empty\n");
//     else
//     {
//         t = top;
//         top = top->next;
//         x = t->data;
//         free(t);
//     }
//     return x;
// }
// void Display()
// {
//     struct Node *p;
//     p = top;
//     while (p != NULL)
//     {
//         printf("%d ", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }
// int isBalanced(char *exp)
// {
//     int i;

//     for (i = 0; exp[i] != '\0'; i++)
//     {
//         if (exp[i] == '(')
//             push(exp[i]);
//         else if (exp[i] == ')')
//         {
//             if (top == NULL)
//                 return 0;
//             pop();
//         }
//     }
//     if (top == NULL)
//         return 1;
//     else
//         return 0;
// }
// int pre(char x)
// {
//     if (x == '+' || x == '-')
//         return 1;
//     else if (x == '*' || x == '/')
//         return 2;
//     return 0;
// }

// int isOperand(char x)
// {
//     if (x == '+' || x == '-' || x == '*' || x == '/')
//         return 0;
//     else
//         return 1;
// }

// char *InToPost(char *infix)
// {
//     int i = 0, j = 0;
//     char *postfix;
//     long len = strlen(infix);
//     postfix = (char *)malloc((len + 2) * sizeof(char));

//     while (infix[i] != '\0')
//     {
//         if (isOperand(infix[i]))
//             postfix[j++] = infix[i++];
//         else
//         {
//             if (pre(infix[i]) > pre(top->data))
//                 push(infix[i++]);
//             else
//             {
//                 postfix[j++] = pop();
//             }
//         }
//     }
//     while (top != NULL)
//         postfix[j++] = pop();
//     postfix[j] = '\0';
//     return postfix;
// }
// int Eval(char *postfix)
// {
//     int i = 0;
//     int x1, x2, r = 0;

//     for (i = 0; postfix[i] != '\0'; i++)
//     {
//         if (isOperand(postfix[i]))
//         {
//             push(postfix[i] - '0');
//         }
//         else
//         {
//             x2 = pop();
//             x1 = pop();
//             switch (postfix[i])
//             {
//             case '+':
//                 r = x1 + x2;
//                 break;
//             case '-':
//                 r = x1 - x2;
//                 break;
//             case '*':
//                 r = x1 * x2;
//                 break;
//             case '/':
//                 r = x1 / x2;
//                 break;
//             }
//             push(r);
//         }
//     }
//     return top->data;
// }
// int main()
// {
//     char *postfix = "234*+82/-";

//     printf("Result is %d\n", Eval(postfix));

//     return 0;
// }
// struct Node
// {
//     char data;
//     struct Node *next;
// } *top = NULL;
// void push(char x)
// {
//     struct Node *t;
//     t = (struct Node *)malloc(sizeof(struct Node));

//     if (t == NULL)
//         printf("stack is full\n");
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
//         printf("Stack is Empty\n");
//     else
//     {
//         t = top;
//         top = top->next;
//         x = t->data;
//         free(t);
//     }
//     return x;
// }
// void Display()
// {
//     struct Node *p;
//     p = top;
//     while (p != NULL)
//     {
//         printf("%d ", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }
// int isBalanced(char *exp)
// {
//     int i;

//     for (i = 0; exp[i] != '\0'; i++)
//     {
//         if (exp[i] == '(')
//             push(exp[i]);
//         else if (exp[i] == ')')
//         {
//             if (top == NULL)
//                 return 0;
//             pop();
//         }
//     }
//     if (top == NULL)
//         return 1;
//     else
//         return 0;
// }
// int pre(char x)
// {
//     if (x == '+' || x == '-')
//         return 1;
//     else if (x == '*' || x == '/')
//         return 2;
//     return 0;
// }

// int isOperand(char x)
// {
//     if (x == '+' || x == '-' || x == '*' || x == '/')
//         return 0;
//     else
//         return 1;
// }

// char *InToPost(char *infix)
// {
//     int i = 0, j = 0;
//     char *postfix;
//     int len = strlen(infix);
//     postfix = (char *)malloc((len + 2) * sizeof(char));

//     while (infix[i] != '\0')
//     {
//         if (isOperand(infix[i]))
//             postfix[j++] = infix[i++];
//         else
//         {
//             if (pre(infix[i]) > pre(top->data))
//                 push(infix[i++]);
//             else
//             {
//                 postfix[j++] = pop();
//             }
//         }
//     }
//     while (top != NULL)
//         postfix[j++] = pop();
//     postfix[j] = '\0';
//     return postfix;
// }

// int main()
// {
//     char *infix = "a+b*c-d/e";
//     push('#');

//     char *postfix = InToPost(infix);

//     printf("%s ", postfix);

//     return 0;
// }

// struct Stack
// {
// 	int top;
// 	unsigned capacity;
// 	int *array;
// };

// struct Stack *createStack(unsigned capacity)
// {
// 	struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));

// 	if (!stack)
// 		return NULL;

// 	stack->top = -1;
// 	stack->capacity = capacity;
// 	stack->array = (int *)malloc(stack->capacity * sizeof(int));

// 	if (!stack->array)
// 		return NULL;

// 	return stack;
// }

// int isEmpty(struct Stack *stack)
// {
// 	return stack->top == -1;
// }

// char peek(struct Stack *stack)
// {
// 	return stack->array[stack->top];
// }

// char pop(struct Stack *stack)
// {
// 	if (!isEmpty(stack))
// 		return stack->array[stack->top--];
// 	return '$';
// }

// void push(struct Stack *stack, char op)
// {
// 	stack->array[++stack->top] = op;
// }

// int evaluatePostfix(char *exp)
// {

// 	struct Stack *stack = createStack(strlen(exp));
// 	int i;

// 	if (!stack)
// 		return -1;

// 	for (i = 0; exp[i]; ++i)
// 	{

// 		if (isdigit(exp[i]))
// 			push(stack, exp[i] - '0');

// 		else
// 		{
// 			int val1 = pop(stack);
// 			int val2 = pop(stack);
// 			switch (exp[i])
// 			{
// 			case '+':
// 				push(stack, val2 + val1);
// 				break;
// 			case '-':
// 				push(stack, val2 - val1);
// 				break;
// 			case '*':
// 				push(stack, val2 * val1);
// 				break;
// 			case '/':
// 				push(stack, val2 / val1);
// 				break;
// 			}
// 		}
// 	}
// 	return pop(stack);
// }

// int main()
// {
// 	char exp[] = "231*+9-";
// 	cout << "postfix evaluation: " << evaluatePostfix(exp);
// 	return 0;
// }

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// void Bubblesort(int arr[], int n)
// {
//     int i, j, z = 0;

//     for (i = 0; i < n - 1; i++)
//     {
//         z = 0;
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(&arr[j], &arr[j + 1]);
//                 z = 1;
//             }
//         }
//         if (z == 0)
//             break;
//     }
// }
// int main()
// {
//     int n;
//     printf("ENter the size of Array:-\n");
//     cin >> n;
//     int arr[n];
//     printf("Enter the element in Array:-\n");
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     Bubblesort(arr, n);

//     printf("Aftr sorting:-\n");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");

//     return 0;
// }

struct Node
{
	int num;
	struct Node *next;
	struct Node *prev;
};

void traversingDoubly(struct Node *head)
{
	struct Node *p = head;
	struct Node *q = p;
	while (p != NULL)
	{
		cout << "Element : - " << p->num << endl;
		p = p->next;
	}
}

struct Node *InsertAtHead(struct Node *head, int data)
{
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->num = data;
	ptr->next = head;
	ptr->prev = NULL;
	head= ptr;
	return head;
}
int main()
{
	struct Node *head, *first, *second, *third, *fourth;
	head = (struct Node *)malloc(sizeof(struct Node));
	first = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	fourth = (struct Node *)malloc(sizeof(struct Node));

	head->num = 2;
	head->next = first;
	head->prev = NULL;

	first->num = 4;
	first->next = second;
	first->prev = head;

	second->num = 6;
	second->next = third;
	second->prev = first;

	third->num = 8;
	third->next = fourth;
	third->prev = second;

	fourth->num = 10;
	fourth->next = NULL;
	fourth->prev = third;

	traversingDoubly(head);
  
	cout << "Inserting a Node at head:-\n";
	head = InsertAtHead(head, 5);
	traversingDoubly(head);
	return 0;
}