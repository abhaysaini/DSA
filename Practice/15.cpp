
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
//         int A[n], B[n];
//         if (n < 4)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 int x;
//                 cin >> x;
//                 B[i] = x;
//                 A[i] = pow(2, x);
//             }
//             sort(A, A + n);
//             int l1 = A[0], r1 = A[1], l2 = A[2], r2 = A[3], flag = 0;
//             int sum = l1 + r1 + l2 + r2;
//             for (int i = 0; i < n; i++)
//             {
//                 if (sum == A[i])
//                 {
//                     flag = 1;
//                     break;
//                 }
//             }
//             if (flag)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,y,k;
        cin>>x>>y>>k;
        long long int nt = x-1;
        long long int up = (k*y)+k-1;
        long long int ans = (up/nt)+k;
        if(up%nt !=0){
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}