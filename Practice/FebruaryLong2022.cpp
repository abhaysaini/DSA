//-- - - - - - - - - - -Q1 - - - - - - - - - -
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y,m,n;
//         cin>>x>>y>>m>>n;
//         int a = x*y;
//         int b = m*n;
//         if(b>=a){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

//-- - - - - - - - - - -Q2 - - - - - - - - - -
//-- - - - - - - - - - -Q2 - - - - - - - - - -
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int c=0,N=0;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if(s[i]=='C'){
//                 c= c+2;
//             }
//             else if(s[i]=='D'){
//                 c++;
//                 N++;
//             }
//             else if(s[i]=='N'){
//                 N=N+2;
//             }
//         }

//         if(c>N){
//             cout<<60*n<<endl;
//         }
//         else if(c==N){
//             cout<<55*n<<endl;
//         }
//         else{
//             cout<<40*n<<endl;
//         }

//     }
//     return 0;
// }

//-- - - - - - - - - - -Q3 - - - - - - - - - -

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int A[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>A[i];
//         }
//         int inc =0;
//         for (int i = 0; i < n; i++)
//         {
//             int x = i+1+inc;
//             if(A[i]== x){
//                 inc++;
//             }
//         }
//         cout<<inc<<endl;
//     }
//     return 0;
// }

//-- - - - - - - - - - -Q4 - - - - - - - - - -

// int A[n/2];
//             for (int i = 0; i < n; i++)
//             {
//                 if(s[i] == s[n+1-i]){
//                     A[i]=0;
//                 }
//                 else{
//                     A[i]=1;
//                 }
//             }
//             int x =A[0],flag =0;
//             for (int i = 1; i < n; i++)
//             {
//                 if(x!=A[i]){
//                     flag =1;
//                 }
//             }
//             if(!flag){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
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
//         string s;
//         cin >> s;
//         if (s.length() % 2 != 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             int zero = 0, one = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if (s[i] == '0')
//                 {
//                     zero++;
//                 }
//                 else
//                 {
//                     one++;
//                 }
//             }
//             if (zero == one||((zero%2==0)&&(one%2==0)))
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;e
//             }
//         }
//     }
//     return 0;
// }

// import java.util.*;
// import java.lang.*;
// import java.io.*;

// /* Name of the class has to be "Main" only if the class is public. */
// class Codechef
// {
// public
//     static void main(String[] args) throws IOException
//     {
//         Scanner sc = new Scanner(System.in);
//         int t = sc.nextInt();
//         while (t-- > 0)

//         {
//             int n = sc.nextInt();
//             sc.nextLine();
//             String s = sc.nextLine();
//             int z = 0;
//             int o = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if (s.charAt(i) == '0')
//                 {
//                     z++;
//                 }
//                 else
//                 {
//                     o++;
//                 }
//             }
//             if (n % 2 == 0)
//             {
//                 if (((z % 2 == 0) && (o % 2 == 0)) || (o == z))
//                 {
//                     System.out.println("YES");
//                 }
//                 else
//                 {
//                     System.out.println("NO");
//                 }
//             }
//             else
//             {
//                 System.out.println("Yes");
//             }
//         }
//     }
// }

//- - - - - - - - - -- - - - Q5 - - - - - - - - - - - - - - -- - -- --
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = n; j > 0; j--)
            {
                if ((A[i] & A[j] == 0) || (A[i] == A[j]))
                {
                    flag = 1;
                }
            }
        }

        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}