

// int main(){
//     int t ;
//     cin>>t;
//     while(t--){
//         int r1,r2,r3,r4,r5;
//         cin>>r1>>r2>>r3>>r4>>r5;
//         int arr[5]= {r1,r2,r3,r4,r5};
//         int zero=0,one=0,two=0;
//         for (int i = 0; i < 5; i++)
//         {
//             if(arr[i]==0){
//                 zero++;
//             }
//             else if(arr[i]==1){
//                 one++;
//             }
//             else if(arr[i]==2){
//                 two++;
//             }
//         }

//         if(zero>one&&zero>>two || one ==2&&two==2){
//             cout<<"DRAW"<<endl;
//         }
//         else if(one>=zero&&one>two){
//             cout<<"INDIA"<<endl;
//         }
//         else if(two>zero&&two>=one){
//             cout<<"ENGLAND"<<endl;
//         }
//     }
//     return 0;
// }

//  int main(){
//      ios_base::sync_with_stdio(false);
//      cin.tie(NULL);
//      int t;
//      cin>>t;
//      while(t--){
//         int n;
//         cin>>n;
//         int last = n%10;
//         int first=0;
//         while(n>10){
//             n = n/10;
//         }
//         first = n;
//         cout<<first+last<<endl;
//      }
//  }
// typedef long long int ll;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     int sum =0;
//     while (t>0)
//     {
//         ll n;
//         cin>>n;

//         ll last;
//         while(n>0){
//             last = n%10;
//             n = n/10;
//             sum = sum+last;
//         }
//     cout<<sum<<endl;
//     sum =0;
//     }
//     return 0;
// // }
// #include <string>
// #include <string.h>
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//        int rem,n;
//        cin>>n;
//        bool lz = true;
//        while (n>0)
//        {
//            if(n%10 == 0 && lz){
//                n/=10;
//                continue;
//            }
//            cout<<n%10;
//            n = n/10;
//        }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int count=0;
//         while(n>0)
//         {
//             int i = n%10;
//             n/=10;
//             if(i ==4){
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//     }
// }
// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int fact = 1;
//         while(n>0){
//             fact = fact*n;
//             n--;
//         }
//         cout<<fact<<endl;
//     }
//     return 0;
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int x = sqrt(n);
//         cout<<x<<endl;
//     }
//     return 0;
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int a[3];
//         cin>>a[0]>>a[1]>>a[2];
//         int max = INT_MIN,smax = INT_MIN;
//         for (int i = 0; i <3; i++)
//         {
//             if(a[i]>max){
//                 smax = max;
//                 max = a[i];
//             }
//             else if(a[i]>smax){
//                 smax= a[i];
//             }
//         }
//         cout<<smax<<endl;
//     }
//     return 0;
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     int p1,p2,csum1=0,csum2 =0,ans,max=INT_MIN;
//     while(t--){
//         cin>>p1>>p2;
//         csum1+=p1;
//         csum2+=p2;

//         if(abs(csum1-csum2)>max){
//             max = abs(csum1-csum2);
//             if(csum1>csum2){
//                 ans = 1;
//             }
//             else{
//                 ans = 2;
//             }
//         }
//     }
//     cout<<ans<<" "<<max<<endl;
//     return 0;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int sum = 1;
//         for (int i = n; i > 1; i--)
//         {
//             sum = sum * i;
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     int A[t];
//     int x = t;
//     for (int i = 0; i < t; i++)
//     {
//         cin>>A[i];
//     }

//     for (int i = 0; i < x; i++)
//     {
//         for (int j = i + 1; j < x; j++)
//         {
//             if (A[i] > A[j])
//             {
//                 int temp = A[i];
//                 A[i] = A[j];
//                 A[j] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < x; i++)
//     {
//         cout << A[i] << endl;
//     }

//     return 0;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n<10){
//            cout<<" Thanks for helping Chef!"<<endl;
//         }
//         else{
//             cout<<"-1"<<endl;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         if(a<b){
//             cout<<"<"<<endl;
//         }
//         else if(a>b){
//             cout<<">"<<endl;
//         }
//         else if(a==b){
//             cout<<"="<<endl;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         if(a+b+c<=180){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     int even = 0, odd = 0;
//     int A[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] % 2 == 0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }

//     if (even <= odd)
//     {
//         cout << "NOT READY" << endl;
//     }
//     else
//     {
//         cout << "READY FOR BATTLE" << endl;
//     }
//     return 0;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n1,n2;
//     cin >> n1>>n2;
//     if(n1>n2){
//         cout<<n1-n2<<endl;
//     }
//     else{
//         cout<<n1+n2<<endl;
//     }
//     return 0;
// }
// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
// int main()
// {
//     // your code goes here
//     int w;
//     cin >> w;
//     int t;
//     for (int i = 0; i < w; i++)
//     {
//         cpp_int fact = 1;
//         cin >> t;

//         for (int j = 1; j <= t; j++)
//         {
//             fact = fact * j;
//         }
//         cout << fact << endl;
//         fact = 0;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s = to_string(n);
//         int start = 0;
//         int end = s.length() - 1;
//         bool flag = true;
//         while (start < end)
//         {
//             if (s[start] != s[end])
//             {
//                 flag = false;
//                 break;
//             }
//             else
//             {
//                 start++;
//                 end--;
//             }
//         }
//         if (flag)
//         {
//             cout << "wins" << endl;
//         }
//         else
//         {
//             cout << "loses" << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int c=0;
//         int d=0;
//         int n;
//         cin >> n;
//         for(int i=2;i<=n;i++)
//         {
//             int x=i*i;
//             int y= x*i;
//             if(x<=n )
//             c++;
//             if(y<=n)
//             d++;

//         }
//       int  count =c+d;
//         cout<<count+1<<endl;
//     }
//     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin>>s;
//         int n = s.length();
//         if(n%2 == 1){
//             cout<<"NO"<<endl;
//         }
//         int x = n/2;
//         string t1 = s.substr(0,x);
//         string t2 = s.substr(x);
//         if(t1 == t1){
//             cout<<"yes"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int A[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//         }
//         int m = *max_element(A, A + n);
//         int round =0;
//         for (int i = 0; i < n; i++)
//         {
//             round++;
//             while (A[i] != m)
//             {
//             }
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int A[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//         }
//         int m = *max_element(A, A + n);
//         int mi = *min_element(A, A + n);
//         int round = m - mi;
//         cout<<round<<endl;
//     }
//     return 0;
// }

int main(){
    int A[6]= {3,6,1,3,8,12};
    sort(A,A+6,greater<>());
    for (int i = 0; i < 6; i++)
    {
        cout<<A[i]<<" ";
    }
    
}