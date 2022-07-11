// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         cout<<n*10<<endl;
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
//         int n, y, max = 0;
//         cin >> n >> y;
//         int A[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//         }
//         max = max + y;
//         int maxsum=0;
//         for (int i = 0; i < n; i++)
//         {
//             max = max+A[i];
//             if(max>maxsum){
//                 maxsum = max;
//             }
//         }

//         cout << maxsum << endl;
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
//         int n, m,r=0;
//         cin >> n>>m;
//         int arr[n],A[n];
//         r = r+m;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             r = r + arr[i];
//             A[i] = r;
//         }
//         cout << *max_element(A,A+n) << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int B[2*n];
//         int sum =0;
//         for (int i = 0; i < 2*n; i++)
//         {
//             int x;
//             cin>>x;
//             B[i]=x;
//             sum = sum+x;
//         }
//         if(sum%2==0){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
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
//         int n,x,y;
//         cin>>n>>x>>y;
//         int bus = 100,car = 4;

//         // int A[3];
//         // int rem1 = n%bus,rem2 = n%car;
//         // int test1 = ceil(n/bus)*x;
//         // int test2 = ceil(n/car)*y;
//         // int test3 = (n/bus)*x + ceil(rem1/car)*y;
//         // int test4 = (n/car)*y + ceil(rem2/bus)*x;
//         // A[0]= test1,A[1]=test2,A[2]= test3,A[3]=test4;
//         // sort(A,A+n);
//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout<<A[i]<<" ";
//         // }
//         // cout<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         int A[n];
//         int sum1 = m,sum2=m;
//         for (int i = 0; i < n; i++)
//         {
//             int x ;
//             cin>>x;
//             A[i]=x;
//             sum1 = sum1+x;
//             if(sum1>sum2){
//                 sum2 = sum1;
//             }
//         }
//         cout<<sum2<<endl;
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int A[n];
//         for (int i = 0; i <n; i++)
//         {
//             cin>>A[i];
//         }
//         int x = n/2,B[n],C[n],fi[n];
//         sort(A,A+n);
//         for (int i = 0; i < n/2; i++)
//         {
//             B[i] = A[i];
//         }

//         for (int i = n/2; i <n; i++)
//         {
//             C[i] = A[i];
//         }

//         for (int i = 0; i < n; i+2)
//         {
//             fi[i] = B[i];
//             fi[i+1] = C[i];
//         }

//         cout<<x<<endl;
//         for (int i = 0; i < n; i++)
//         {
//             cout<<fi[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
