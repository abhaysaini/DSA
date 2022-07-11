// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,flag =0;
//         cin>>n;
//         int A[n],temp[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>A[i];
//             temp[i]=A[i];
//         }
//         sort(temp,temp+n);
//         for (int i = 0; i < n; i++)
//         {
//             if(temp[i]!=A[i]){
//                 flag =1;
//             }
//         }
//         if(flag){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }

//     }
//     return 0;
// }

//// - - - - - - - - - - -  - - - - - - Codeforces Round #771 (Div. 2) - - - - - - - - - - - -- - - -
// #include <bits/stdc++.h>
// using namespace std;

// int chk(int A[], int n)
// {
//     int fla = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] > A[i + 1])
//         {
//             fla = 1;
//         }
//     }
//     return fla;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int A[n],flag = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             int j = i + 1;
//             if (A[i] > A[j])
//             {
//                 if ((A[i] + A[j]) % 2 == 1)
//                 {
//                     int t = A[i];
//                     A[i] = A[j];
//                     A[j] = t;
//                 }
//                 else
//                 {
//                     flag = 1;
//                     break;
//                 }
//             }
//         }

//         if (flag)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {

//             if (chk(A,n))
//             {
//                 cout << "NO" << endl;
//             }
//             else
//             {
//                 cout << "YES" << endl;
//             }
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
//         int n;
//         cin>>n;
//         vector<int> A;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin>>x;
//             A.push_back(x);
//         }

//         int j,index=0;
//         for (int i = 0; i < n; i++)
//         {
//             if(A[i]!=i+1){
//                 j=i+1;
//                 break;
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if(A[i]==j){
//                 index = i+1;
//             }
//         }

//         A.reserve(j,index);

//         for (int i = 0; i < n; i++)
//         {
//             cout<<A[i]<<" ";
//         }
//         cout<<endl;
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

//         vector <int> odd,even;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin>>x;
//             if(x%2 ==0){
//                 even.push_back(x);
//             }
//             else{
//                 odd.push_back(x);
//             }
//         }

//         vector <int> sortod = odd,sortev = even;

//         sort(sortod.begin(),sortod.end());
//         sort(sortev.begin(),sortev.end());

//         int flag =1;

//         for (int i = 0; i < odd.size(); i++)
//         {
//             if(sortod[i]!= odd[i]){
//                 flag =0;
//                 break;
//             }
//         }
//         for (int i = 0; i < even.size(); i++)
//         {
//             if(sortev[i]!= even[i]){
//                 flag =0;
//                 break;
//             }
//         }
//         if(flag){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n], B[n];
        if (n < 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cin >> B[i];
                A[i] = pow(2, B[i]);
            }
            sort(A, A + n);
            int l1 = A[0], r1 = A[1], l2 = A[2], r2 = A[3], flag = 0;
            int sum = l1 + r1 + l2 + r2;
            for (int i = 0; i < n; i++)
            {
                if (sum == A[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}