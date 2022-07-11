
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int n = s.length();
//         if (n % 2 == 1)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             int x = n / 2;
//             string t1 = s.substr(0, x);
//             string t2 = s.substr(x);
//             if (t1 == t2)
//             {
//                 cout << "yes" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
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
//         int a, b, c;
//         cin >> a >> b >> c;
//         int A[2];
//         A[0] = a;
//         A[0] = b;
//         A[0] = c;
//         int min = *min_element(A,A+2);
//         int m = 0,y;
//         while (++m)
//         {
//             if (a == min)
//             {
//                  y = a * m;
//                 if (y - b == y - c)
//                 {
//                     cout << "YES" << endl;
//                     break;
//                 }
//             }
//             else if (b == min)
//             {
//                  y = b * m;
//                 if (y - a == y - c)
//                 {
//                     cout << "YES" << endl;
//                     break;
//                 }
//             }
//             else if (c == min)
//             {
//                  y = c * m;
//                 if (y - a == y - b)
//                 {
//                     cout << "YES" << endl;
//                     break;
//                 }
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
//     return 0;
// // }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int q,p;
//         cin>>q>>p;
//         auto x = q*p;
//         auto exp=0;
//         if(x>1000){
//             exp = (x*10)/100;
//             cout<<x-exp<<endl;
//         }
//         else{
//             cout<<x<<endl;
//         }
//     }
//     return 0;
// }
// #define long long ll
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         ll int q, p;
//         scanf("%lld%lld", &q, &p);
//         double x = q*p;
//         if(x>1000){
//             x= x-(x*10)/100;
//             cout<<x<<endl;
//         }
//         else{
//            cout<<x<<endl;
//         }
//     }
//     return 0;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> v = {100,50,10,5,2,1};
//         int ans = 0;
//         for (int i = 0; i < v.size(); i++)
//         {
//             ans += n/v[i];
//             n -= v[i]*(n/v[i]);
//         }
//         cout<<ans<<endl;
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         char n;
//         cin>>n;
//         vector <string> v = {"BattleShip","Cruiser","Destroyer","Frigate"};
//         if(n == 'B' || n == 'b'){
//             cout<<v[0]<<endl;
//         }
//         else if(n == 'C' || n == 'c'){
//             cout<<v[1]<<endl;
//         }
//         else if(n == 'D' || n == 'd'){
//             cout<<v[2]<<endl;
//         }
//         else if(n == 'F' || n == 'f'){
//             cout<<v[3]<<endl;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int d, n,sum=0;
//         cin >> d >> n;
//         while(d--){
//             for (int i = 1; i <=n; i++)
//             {
//                 sum+=i;
//             }
//             n = sum;
//             if(d!=0){
//                 sum =0;
//             }
//         }
//         cout<<sum<<endl;
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
//         double hra =0.00,da=0.00;
//         if(n<1500){
//             hra = 0.1*n;
//             da = 0.9*n;
//         }
//         else if (n>=1500){
//             hra = 500;
//             da = 0.98*n;
//         }
//         double x = hra+da+n;
//         printf("%.2f\n",x);
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// // #include <ext/pb_ds/assoc_container.hpp>
// // #include <ext/pb_ds/tree_policy.hpp>
// typedef long long ll ;
// #define mo 1000000007
// using namespace std ;
// // using namespace __gnu_pbds ;
// // typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds ;

// int main(){
//    int sz;
//    cin>>sz;
//    while(sz--)
//    {
//       int n;
//       cin>>n;
//    int x= sqrt(n);
//     int y =cbrt(n);
//       cout<<x+y-1<<endl;
//    }
//    return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         set<int> s;
//         for (int i = 1; i*i <= n; i++)
//         {
//                 s.insert(i*i);
//         }
//         for (int i = 1; i*i*i <= n; i++)
//         {
//                 s.insert(i*i*i);
//         }

//         cout<<s.size()<<endl;
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
//         int sum = 0;
//         n -= 2;
//         n = n / 2;
//         sum = (n * (n + 1)) / 2;
//         cout << sum << endl;
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
//         for (int i = 0; i < n; i++)
//         {
//             cin>>A[i];
//         }
//         sort(A,A+n);
//         cout<<A[0]+A[1]<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int h,t;
//         double c;
//         cin>>h>>c>>t;
//         if(h>50 &&c<0.7&&t>5600){
//             cout<<10<<endl;
//         }
//         else if(h>50 &&c<0.7){
//             cout<<9<<endl;
//         }
//         else if(c<0.7&&t>5600){
//             cout<<8<<endl;
//         }
//         else if(h> 50&&t>5600){
//             cout<<7<<endl;
//         }
//         else if(h>50 ||c<0.7||t>5600){
//             cout<<6<<endl;
//         }
//         else {
//             cout<<5<<endl;
//         }
//     }
//     return 0;
// }

/*- - - - - - - -  - - - - - - - - - - - - - - - - -TRY AGAIN - - - - - - - - - - - - - - - - - - */
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, s;
//         cin >> n >> s;
//         string n1, s1, ans="";
//         vector <string> s;
//         n1 = to_string(n);
//         s1 = to_string(s);
//         int x = abs(n1.length() - s1.length());
//         if ((n1.length() == 1 && s1.length() == 2) || (s1.length() == 1 && n1.length() == 1))
//         {
//             if (s - n > 10)
//             {
//                 cout << -1 << endl;
//             }
//             else if (n < s)
//             {
//                 cout << s - n << endl;
//             }
//             else
//             {
//                 cout << -1 << endl;
//             }
//         }
//         else if (n1.length() == s1.length() == 0)
//         {
//             if (n1.end()>s1.end())
//             {
//                 cout<< -1<<endl;
//             }
//         }
//         else if (s1.length() - n1.length() > 1)
//         {
//             int len = n1.length();
//             int len2 = s1.length();
//         }
//     }
//     return 0;
// }

/*- - - - - - - -  - - - - - - - - - - - - - - - - -TRY AGAIN - - - - - - - - - - - - - - - - - - */

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string n;
//         cin>>n;
//         int x = n.length(),len=0;
//         if(x%2 == 0){
//             len = x/2;
//         }
//         else{
//             len = (x+1)/2;
//         }
//         string sub1,sub2;
//         sub1 = n.substr(0,len);
//         sub2 = n.substr(len);
//         for (int i = 0; i < sub1.length(); i++)
//         {
//             for (int j = 0; j < sub2.length(); j++)
//             {
//                 if(sub1[i] == sub2[j]){
//                     sub2[j] = 0;
//                     break;
//                 }
//             }

//         }
//         bool flag = true;
//         for (int i = 0; i < sub2.length(); i++)
//         {
//             if(sub2[i] != 0){
//                 flag = false;
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

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         if((a==b&&c==d)||(a==c&&b==d)|| (a==d&&b==c)){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

//----------------------------------------
// int maxm(int a, int b, int c)
// {
//     return a > b ? (a > c ? a : c) : (b > c ? b : c);
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         int x = maxm(a, b, c);
//         int a1, b1, c1;
//         a != x ? (cout << abs(a - x) + 1 << " ") : cout << 0 << " ";
//         b != x ? (cout << abs(b - x) + 1 << " ") : cout << 0 << " ";
//         c != x ? (cout << abs(c - x) + 1 << " ") : cout << 0 << " ";
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int maxm(int a, int b, int c)
// {
//     return a > b ? (a > c ? a : c) : (b > c ? b : c);
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a1,a2,b1,b2,c1,c2;
//         cin>>a1>>a2;
//         cin>>b1>>b2;
//         cin>>c1>>c2;
//         int x,y,z;
//         x = a1+a2;
//         y = b1+b2;
//         z = c1+c2;
//         cout<<maxm(x,y,z)<<endl;
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
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << "1 ";
//             }
//             cout << endl;
//         }
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
//         int n, a;
//         cin >> n >> a;
//         if (n == 1)
//         {
//             if (a % 2 == 0)
//             {
//                 cout << "EVEN" << endl;
//             }
//             else
//             {
//                 cout << "ODD" << endl;
//             }
//             continue;
//         }
//         if (a % 2 == 1)
//         {
//             if (n % 2 == 0)
//             {
//                 cout << "EVEN" << endl;
//             }
//             else
//             {
//                 cout << "ODD" << endl;
//             }
//         }
//         else{
//             cout<<"IMPOSSIBLE"<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int maxi(int a, int b, int c)
// {
//     return a > b ? (a > c ? a : c) : (b > c ? b : c);
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         int x = maxi(a, b, c);
//         int a1, b1, c1;

//             a != x ? (cout << abs(a - x) + 1 << " ") : cout << 0 << " ";
//             b != x ? (cout << abs(b - x) + 1 << " ") : cout << 0 << " ";
//             c != x ? (cout << abs(c - x) + 1 << " ") : cout << 0 << " ";
//             cout << endl;
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
//         int x;
//         cin >> x;
//         int A[x];
//         for (int i = 0; i<x; i++)
//         {
//             cin>>A[i];
//         }

//         int ratio = 1;
//         bool flag = true;
//         int m = *min_element(A,A+x);
//         for (int i = 1; i<=m; i++)
//         {
//             flag = true;
//             for (int j = 0; j < x; j++)
//             {
//                 if(A[j]/i!= 0){
//                     flag = false;
//                     break;
//                 }
//             }
//             if(flag ){
//                 ratio = i;
//             }
//         }
//         for (int i = 0; i < x; i++)
//         {
//             cout<<(A[i]/ratio)<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }
// vector<int> v;
//         for (int i = 0; i<n; i++)
//         {
//             v.push_back(i);
//         }
//         int cost = 0;
//         int i =0,j=1;
//         while(v.size() != 1){
//             if(v[i]>v[j]){
//                 v.erase(v.begin());
//               v.shrink_to_fit();
//                 cost += v[j];
//             }
//             else if(v[j]>v[i]){
//                 v.erase(v.begin()+1);
//                 v.shrink_to_fit();
//                 cost += v[i];
//             }
//         }
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
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             v.push_back(i);
//         }
//         int cost = 0;
//         int i = 0, j = 1;
//         while (v.size() != 1)
//         {
//             if (v[i] > v[j])
//             {
//                 v.erase(v.begin());
//                 cost += v[j];
//             }
//             else if (v[j] > v[i])
//             {
//                 v.erase(v.begin() + 1);
//                 cost += v[i];
//             }
//         }
//         cout<<cost<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,x,y;
//         cin>>a>>b>>x>>y;
//         int sum=0;
//         sum = (x/a)+(y/b);
//         cout<<sum<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,count=0;
//         cin>>n;
//         string s = to_string(n);
//         for (int i = 0; i < s.length(); i++)
//         {
//             if(s[i] == '4'){
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         if((a+c == 180 )&&(b+d == 180)){
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
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int sz;
//         cin >> sz;
//         int arr[sz];
//         for (int i = 0; i < sz; i++)
//             cin >> arr[i];
//         int a = *min_element(arr, arr + sz);
//         cout << a * (sz - 1) << endl;
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
//         int a, b, c;
//         cin >> a >> b >> c;
//         int A[3];
//         A[0] = a;
//         A[1] = b;
//         A[2] = c;

//         int x = *max_element(A, A + 3);
//         if (a == b && b == c)
//         {
//             cout << 1 << " " << 1 << " " << 1 << endl;
//         }
//         else if (((a == b) && a > c) || ((b == c) && b > a) || ((a == c) && a > b))
//         {

//             cout << abs(x - a + 1) << " " << abs(x - b + 1) << " " << abs(x - c + 1) << endl;
//         }
//         else
//         {
//             a != x ? (cout << abs(a - x) + 1 << " ") : cout << 0 << " ";
//             b != x ? (cout << abs(b - x) + 1 << " ") : cout << 0 << " ";
//             c != x ? (cout << abs(c - x) + 1 << " ") : cout << 0 << " ";
//             cout << endl;
//         }
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
//         int a, b, c;
//         cin >> a >> b >> c;
//         int A[3] = {a,b,c};
//         int x = *max_element(A,A+3);
//         int a1, b1, c1;

//             a != x ? (cout << abs(a - x) + 1 << " ") : cout << 0 << " ";
//             b != x ? (cout << abs(b - x) + 1 << " ") : cout << 0 << " ";
//             c != x ? (cout << abs(c - x) + 1 << " ") : cout << 0 << " ";
//             cout << endl;
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
//         int arr[3];
//         for (int i = 0; i < 3; i++)
//             cin >> arr[i];
//         int x = *max_element(arr, arr + 3);
//         if (arr[0] == arr[1] == arr[2] ){
//             cout<<arr[0]+1<<" "<<arr[0]+1<<" "<<arr[0]+1<<endl;
//         }
//         else if (1)
//         {
//             for (int i = 0; i < 3; i++)
//             {
//                 if ((x - arr[i]) != 0)
//                 {
//                     cout << x - arr[i] + 1 << " ";
//                 }
//                 else
//                     cout << "1 ";
//             }
//         }
//         cout << endl;
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
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             int k;
//             cin >> k;
//             v.push_back(k);
//         }
//         int i = 0, j = 1, cost = 0;
//         while (v.size() != 1)
//         {
//             if (v[i] >= v[j])
//             {
//                 cost += v[j];
//                 v.erase(v.begin());
//             }
//             else if (v[j] > v[i])
//             {
//                 cost += v[i];
//                 v.erase(v.begin() + 1);
//             }
//         }
//         cout << cost << endl;
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
//         int A[n];
//         for (int i = 0; i < n; i++)
//             cin >> A[i];
//         int x = *min_element(A, A + n);
//         int y = (x * (n - 1));
//         cout << y  << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char string1[20];
//     int i, length;
//     int flag = 0;
//     cout << "Enter a string: "; cin >> string1;
//     length = strlen(string1);
//     for(i=0;i < length ;i++){
//         if(string1[i] != string1[length-i-1]){
//             flag = 1;
//             break;
//    }
// }
//     if (flag) {
//         cout << string1 << " is not a palindrome" << endl;
//     }
//     else {
//         cout << string1 << " is a palindrome" << endl;
//     }
//     system("pause");
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
//         vector<int> v1;
//         vector<int> v2;
//         int dsa = 0, toc = 0, dm = 0, sum1 = 0, sum2 = 0;
//         for (int i = 0; i < 3; i++)
//         {
//             int k;
//             cin >> k;
//             v1.push_back(k);
//             sum1 += k;
//         }

//         for (int i = 0; i < 3; i++)
//         {
//             int k;
//             cin >> k;
//             v2.push_back(k);
//             sum2 += k;
//         }

//         if (sum1 > sum2)
//         {
//             cout << "Dragon" << endl;
//         }
//         else if (sum1 < sum2)
//         {
//             cout << "Sloth" << endl;
//         }
//         else if(sum1 == sum2 && v1[0]>v2[0]){
//             cout<<"Dragon"<<endl;
//         }
//         else if(sum1 == sum2 && v1[0]<v2[0]){
//             cout<<"Sloth"<<endl;
//         }
//         else if(sum1 == sum2 && v1[0]==v2[0]&&v1[1]>v2[1]){
//             cout<<"Dragon"<<endl;
//         }
//         else if(sum1 == sum2 && v1[0]==v2[0]&&v1[1]<v2[1]){
//             cout<<"Sloth"<<endl;
//         }
//         else{
//             cout<<"tie"<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x, sum = 0;
//         cin >> n >> x;
//         int A[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];

//         }
//         sort(A, A + n,greater<>());

//         if (sum < x)
//         {
//             cout << 0 << endl;
//         }
//         else if (sum == x)
//         {
//             cout << 3 << endl;
//         }
//         else
//         {
//             int comp = A[0], count = 1;
//            for (int i = 0; i < n; i++)
//             {
//                 if (comp >= x)
//                 {
//                     break;
//                 }
//                 else
//                 {
//                     count++;
//                     comp = comp + A[i+1];
//                 }
//             }
//             cout << count << endl;
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int A[3][3];
//         for (int i = 0; i < 3; i++)
//         {
//             cin>>A[i][0];
//             cin>>A[i][1];
//             cin>>A[i][2];
//         }
//         int count =0;
//         if(A[0][0]==n&&A[1][1]==n&&A[2][2]==n){
//             cout<<count<<endl;
//             continue;
//         }
//         int a=A[1][0]+A[2][0]+A[2][1];
//         int b=A[0][1]+A[0][2]+A[1][2];
//         int ans = max(a,b);
//         cout <<ans<<endl;
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
//         int n, sum = 0;
//         cin >> n;
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             int k;
//             cin >> k;
//             v.push_back(k);
//             sum += k;
//         }
//         int ai = 20;
//         bool flag = false;
//         while (ai--)
//         {
//             int x = pow(2, ai);
//             if (sum == x)
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             cout << 0 << endl;
//             break;
//         }
//         else{
//             int sum1=0;
//             for (int i = 0; i < n; i++)
//             {
//                 for (int j = 1; i < 30; i++)
//                 {
//                     int po = pow(2,j);
//                     v[i] *=po;

//                 }

//             }

//         }
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
//         int A[n], sum = 0;
//         ;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//             sum += A[i];
//         }
//         int ai = 20;
//         bool flag = false;
//         while (ai--)
//         {
//             int x = pow(2, ai);
//             if (sum == x)
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             cout<<0<<endl;
//             break;
//         }
//         else
//         {
//             int y = ceil(log2(sum));
//             cout<<y<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cin>>n;
//     vector <int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int k;
//         cin>>k;
//         v.push_back(k);
//         sum+=k;
//     }
//     cout<<sum/v.size()<<endl;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         vector<int> v;
//         for (int i = 0; i < 3; i++)
//         {
//             int k;
//             cin>>k;
//             v.push_back(k);
//         }

//         if(v[0]>50&& v[1]<v[0]&&v[2]<v[0]){
//             cout<<'A'<<endl;
//         }
//         else if(v[1]>50&& v[1]>v[0]&&v[2]<v[1]){
//             cout<<'B'<<endl;
//         }
//         else if(v[2]>50&& v[1]<v[2]&&v[1]<v[2]){
//             cout<<'c'<<endl;
//         }
//         else{
//             cout<<"NOTA"<<endl;
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
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,sz=0;
//         cin >> n;
//         while (n%2==0)
//         {
//             n = n / 2;
//             sz=sz+1;
//         }
//         cout<<sz<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int count = 1;
//         int a;
//         cin >> a;
//         if (52 % a == 0)
//         {
//             cout << "0" << endl;
//             int x = -1;
//         }
//         else
//         {
//             int b = 52;
//             while (b--)
//             {
//                 if (b % a == 0)
//                 {
//                     cout << count << endl;
//                     break;
//                 }
//                 else
//                     count++;
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
//         int x,y,z;
//         cin>>x>>y>>z;
//         cout<<(x*z-x*y)<<endl;
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
//         int y = 3*n;
//         int x = (3*n)-1-n;
//         cout<<y-x-n<<" "<<n<<" "<<x<<endl;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d", &t);

//     int m[100], sum = 0, k[100];

//     for (int j = 0; j < t; j++)
//     {

//         int n = 0;
//         scanf("%d", &n);

//         for (int i = 0; n > 1; i++)
//         {
//             m[i] = n % 10;
//             n = n / 10;
//             sum = sum + m[i];
//             if (n < 10)
//             {
//                 sum = sum + n;
//             }
//         }
//         k[j] = sum;
//         sum = 0;
//     }

//     for (int j = 0; j < t; j++)
//     {
//         printf("%d\n", k[j]);
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         if((a+b)==c ||(a+c)==b||(b+c)==a){
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
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x, y;
//         cin >> n >> x >> y;
//         int A[n], B[n];
//         bool flag = true;
// for (int i = 0; i < n; i++)
// {
//     cin >> A[i];
// }
// for (int i = 0; i < n; i++)
// {
//     cin >> B[i];
// }

//         for (int i = 0; i < n; i++)
//         {
//             int temp = A[i] + x;
//             int temp1 = A[i] + y;
//             for (int j = 0; j < n; j++)
//             {
//                 if (temp == B[j] || temp1 == B[j])
//                 {
//                     B[j] = 0;
//                 }
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (B[i] != 0)
//             {
//                 flag = false;
//             }
//         }

// if (flag)
// {
//     cout << "YES" << endl;
// }
// else
// {
//     cout << "NO" << endl;
// }
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
//         int n, x, y;
//         cin >> n >> x >> y;
//         int A[n], B[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> B[i];
//         }
//         bool flag = true;
//         for (int i = 0; i < n; i++)
//         {
//             if ((B[i] - A[i] == x) || (B[i] - A[i] == y))
//             {
//                 A[i] = 0;
//             }
//             else
//             {
//                 flag = false;
//             }
//         }
//         if (flag)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
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
//         int n, k;
//         cin >> n >> k;

//         if (n == 1 && k == 1)
//         {
//             cout << 1 << endl;
//         }
//         else
//         {
//             if (k > n || k < 2)
//             {
//                 cout << -1 << endl;
//             }
//             else
//             {
//                 int ct = 0;
//                 for (int i = 0; i < k - 1; i++)
//                 {
//                     cout << (i + 1) << " ";
//                     ct = i;
//                 }
//                 for (int i = 0; i < n - ct - 1; i++)
//                 {
//                     cout << (n - i) << " ";
//                 }
//                 cout << endl;
//             }
//         }
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
//         string s;
//         cin >> s;
//         int x = s.length();
//         if (x == 1 || x == 2)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             int start = 0, count = 0;
//             for (int i = n; i > 0; i--)
//             {
//                 int start =0;
//                 int end = s.length();
//                 while (start < x)
//                 {
//                     if (s[start] != s[end])
//                     {
//                         cout << "NO" << endl;
//                         return 0;
//                     }
//                     else
//                     {
//                         start++;
//                         end--;
//                     }
//                 }
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
//         string s;
//         cin>>s;
//         if(s=="0"|| s== "1"||s == "01"|| s=="10"){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
//

// - - -- - - - - - - - - - - -- --  -- - - -- - - - - - -  - - - - - - - - - - -- - - -
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int count0=0,count1=0;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if(s[i] == '0'){
//                 count0++;
//             }
//             else if(s[i]=='1'){
//                 count1++;
//             }
//         }

//         if(count0>count1){
//             cout<<count1<<endl;
//         }
//         else if(count1>count0){
//             cout<<count0<<endl;
//         }
//         else if(count1 == count0){
//             cout<<0<<endl;
//         }

//     }
//     return 0;
// }
// - - -- - - - - - - - - - - -- --  -- - - -- - - - - - -  - - - - - - - - - - -- - - -

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int p=0,q=0;
//         string s;
//         cin >> s;
//         int n = s.size();
//         for (int i:s)
//         {
//             if(i =='0'){
//                 p++;
//             }
//             else{
//                 q++;
//             }
//         }

//         if(p == q){
//             cout<<p-1<<endl;
//         }
//         else{
//             cout<<min(p,q)<<endl;
//         }

//     }
//     return 0;
// }

// - - -- - - - - - - - - - - -- --  -- - - -- - - - - - -  - - - - - - - - - - -- - - -

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n%7 ==0){
//             cout<<n<<endl;
//         }
//         else{
//             int x = n%7;
//             int ans = n-x;
//             int ans2 = n+x;
//             if(abs(ans2-n)<abs(n-ans)){
//                 cout<<ans2<<endl;
//             }
//             else{
//                 cout<<ans<<endl;
//             }
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int n;
//         cin >> n;
//         if (n % 7 == 0)
//             cout << n << endl;
//         else
//         {
//             int x = n % 7;
//             if (x >= 3)
//             {
//                 cout << n + 7 - x << endl;
//             }
//             else
//             {
//                 cout << n - x << endl;
//             }
//         }
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
//         if (n % 7 == 0)
//         {
//             cout << n << endl;
//             continue;
//         }

//         int rem = n % 7;
//         int k = 9 - rem, flag = 0, x = n;
//         while (k--)
//         {
//             n++;
//             if (n % 7 == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             cout << n << endl;
//             continue;
//         }

//         while (rem--)
//         {
//             x--;
//             if (x % 7 == 0)
//             {
//                 break;
//             }
//         }
//         cout << x << endl;
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
//         int hc, dc, hm, dm, k, w, a, flag = 0;
//         cin >> hc >> dc >> hm >> dm >> k >> w >> a;

//         for (int i = 0; i <=k; i++)
//         {
//             int health = hc+(i*a);
//             int attack = dc+ ((k-i)*w);
//             int x = ceil(health/dm);
//             int y = ceil(hm/attack);
//             if(x>=y){
//                 cout<<"YES"<<endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             cout<<"NO"<<endl;
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
//         int x = n/2;
//         cout<<x+1<<endl;
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
//         int x, y;
//         cin >> x >> y;
//         if(x>y){
//             cout << ((2 * y) + abs(x-y)) << endl;
//         }
//         else if(x==y){
//             cout<<(2*x-1)<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int min(int a, int b, int c)
// {
//     if (a <= b && a <= c)
//     {
//         return a;
//     }

//     else if (b <= a && b <= c)
//     {
//         return b;
//     }

//     else
//     {
//         return c;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c, p, q, r;
//         cin >> a >> b >> c >> p >> q >> r;
//         auto x = (p + q + r) / 2;
//         if ((a + b + c) > x)
//         {
//             cout << "YES" << endl;
//         }
//         else if(a == 0 && b == 0 && c==0){
//             cout<<"NO"<<endl;
//         }
//         else
//         {
//             if (min(a, b, c) == a)
//             {
//                 int y = p + b + c;
//                 if ((y) > x)
//                 {
//                     cout << "YES" << endl;
//                 }
//             }
//             else if (min(a, b, c) == b)
//             {
//                 int y = a + q + c;
//                 if ((y) > x)
//                 {
//                     cout << "YES" << endl;
//                 }
//             }
//             else if (min(a, b, c) == c)
//             {
//                 int y = a + b + r;
//                 if ((y) > x)
//                 {
//                     cout << "YES" << endl;
//                 }
//             }
//             else
//             {
//                 cout << "NO" << endl;
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
//         int a, b, c, p, q, r;
//         cin >> a >> b >> c >> p >> q >> r;
//         auto x = (p + q + r) / 2;
//         if((a+b+c>x) || (a+b+r>x) || (a+q+c>x) || (p+b+c>x)){
//             cout<<"YES"<<endl;
//         }
//         else {
//             cout<<"NO"<<endl;
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
//         int a,b,c;
//         cin>>a>>b>>c;
//         int arr[] = {a,b,c};
//         int y = *max_element(arr,arr+2);
//         if(a == b){
//             if(c%2 == 0){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
//         else if(a == c){
//             if(b%2 == 0){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
//         else if(c== b){
//             if(a%2 == 0){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
//         else{
//             if((abs(a-b) ==c)||(abs(a-c) == b)|| (abs(b-c)== a)){
//                 cout<<"YES"<<endl;
//             }
//             else {
//                 cout<<"NO"<<endl;
//             }
//         }
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
//         int a, b;
//         cin >> a >> b;
//         int x = a * a;
//         int y = b * b;
//         x = -x;
//         if (a+b!=0)
//         {
//             cout << x << " " << y << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         ll a,b;
//         cin>>a>>b;
//         if(a+b!=0)
//         {
//         ll x = pow(a,2);
//         ll y = pow(b,2);
//         cout<<(-x)<<" "<<y<<endl;
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
//         int n,m;
//         cin>>n>>m;
//         cout<<n*m<<endl;
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
//         double fact,in;
//         double x = pow((0.143*n),n);
//         fact = modf(x,&in);
//         if(fact<0.5){
//             cout<<int(x)<<endl;
//         }
//         else{
//             cout<<int(x+1)<<endl;
//         }
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
//         int n, k, flag = 0;
//         cin >> n >> k;
//         string s;
//         cin >> s;

//         if (k > 0)
//         {
//             while (k > 0)
//             {
//                 int start = 0;
//                 int end = s.length();
//                 int count = 0;
//                 while (start < end)
//                 {
//                     if (s[start] != s[end])
//                     {
//                         if (s[count] == '0')
//                         {
//                             s[count] = '1';
//                         }
//                         else
//                         {
//                             s[count] = '0';
//                         }
//                         count++;
//                         break;
//                     }
//                     else
//                     {
//                         start++;
//                         end--;
//                     }
//                 }
//                 flag = 1;
//             }
//         }
//         else if (flag == 1)
//         {
//             int start = 0;
//             int end = s.length();
//             while (start < end)
//             {
//                 if (s[start] != s[end])
//                 {
//                     cout << "NO" << endl;
//                     return 0;
//                 }
//                 else
//                 {
//                     start++;
//                     end--;
//                 }
//             }
//             cout<<"YES"<<endl;
//         }

//         else if (k == 0)
//         {
//             int start = 0;
//             int end = s.length();
//             while (start < end)
//             {
// if (s[start] != s[end])
// {
//     cout << "NO" << endl;
//     return 0;
// }
// else
// {
//     start++;
//     end--;
// }
//             }
//             cout << "YES" << endl;
//         }
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
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         int start = 0, flip = 0;
//         int end = s.length()-1;
//         // if (k == 0)
//         // {
// int start = 0;
// int end = s.length();
// while (start < end)
// {
//     if (s[start] != s[end])
//     {
//         cout << "NO" << endl;
//         return 0;
//     }
//     else
//     {
//         start++;
//         end--;
//     }
// }
// cout << "YES" << endl;
//         // }

//         // else if (k > 0)
//         // {
// while (start <= end)
// {
//     if (s[start] != s[end])
//     {
//         flip++;
//     }
//     else
//     {
//         start++;
//         end--;
//     }
// }
//         int fi = k - flip;
//         if ((fi >= 0 && fi % 2 == 0))
//         {
//             cout << "YES" << endl;
//         }
//         else if (fi >= 0 && n % 2 == 1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     // }
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
//         cin >> s;
//         int start = 0, flip = 0;
//         int end = n-1;
//         for(int i =0;i<n/2;i++){
//             if(s[i]!=s[n-i-1]){
//                 flip++;
//             }
//         }
//         int fi = k - flip;
//         if ((fi >= 0 && fi % 2 == 0)||(fi >= 0 && n % 2 == 1))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
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
//         int a, b;
//         cin >> a >> b;
//         int flag = 0;
//         string str;
//         cin >> str;

//         int len = str.length();
//         int count = 0;

//         for (int i = 0; i < len; i++)
//         {
//             string ptr = str;
//             reverse(ptr.begin(), ptr.end());

//             if (str != ptr)
//             {
//                 char ch = str[i];
//                 if (ch == '0')
//                 {
//                     ch = '1';
//                 }
//                 else
//                 {
//                     ch = '0';
//                 }
//                 str[i] = ch;
//                 count++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         if (count <= b)
//         {
//             if (a % 2 == 1)
//             {
//                 cout << "Yes" << endl;
//             }
//             else if ((b - count) % 2 == 0)
//             {
//                 cout << "Yes" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int count = 0;
//         int a, b;
//         cin >> a >> b;
//         string s;
//         cin >> s;
//         for (int i = 0; i < a; i++)
//         {
//             if (s[i] != s[a - i])
//                 count++;
//         }
//         if (count / 2 == b)
//             cout << "yes" << endl;
//         else
//             cout << "no" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int count = 0;
//         int a, b;
//         cin >> a >> b;
//         string s;
//         cin >> s;
//         for (int i = 0; i < a; i++)
//         {
//             if (s[i] != s[a - i])
//                 count++;
//         }
//         if (count <= b)
//         {
//             if (a % 2 == 1)
//             {
//                 cout << "Yes" << endl;
//             }
//             else if ((b - count) % 2 == 0)
//             {
//                 cout << "Yes" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int count = 0;
//         int a, b;
//         cin >> a >> b;
//         string s;
//         cin >> s;
//         for (int i = 0; i < a; i++)
//         {
//             if (s[i] != s[a - i])
//                 count++;
//         }
//        if (count/2 <= b)
//         {
//             if (a % 2 == 1)
//             {
//                 cout << "Yes" << endl;
//             }
//             else if ((b - count/2) % 2 == 0)
//             {
//                 cout << "Yes" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// // }

//------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// int chkarry(int A[], int n)
// {
//     int flag = 1;
//     int x = A[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (x != A[i])
//         {
//             flag = 0;
//             break;
//         }
//     }
//     return flag;
// }

// int main()
// {
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
//         sort(A, A + n);
//         if (n == 2)
//         {
//             cout << 1 << endl;
//         }
//         else if (chkarry(A, n))
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             int max = *max_element(A, A + n), count = 0;
//             while (chkarry(A, n) != 1 || n > 1)
//             {
//                 for (int i = 0; i < n; i++)
//                 {
//                     if (A[i] + A[i + 1] == max)
//                     {
//                         A[i] = max;
//                         for (int j = i + 1; j < (n - 1); j++)
//                         {
//                             A[j] = A[j + 1];
//                         }
//                         count++;
//                     }
//                 }
//                 n--;
//             }
//             cout << count << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int sz, flag;
//         int z=0;
//         flag = 0;
//         cin >> sz;
//         int arr[sz];
//         for (int i = 0; i < sz; i++)
//             cin >> arr[i];
//         int temp = *max_element(arr, arr + sz);
//         for (int i = 0; i < sz; i++)
//         {
//             if (arr[i] != temp)
//                 flag = 1;
//         }
//         if (flag == 1)
//         {
//             for (int i = 0; i < sz; i++)
//             {
//                 if (arr[i] + arr[i + 1] == temp)
//                 {
//                     arr[i] = temp;
//                     z++;
//                     for (int i = 0; i < sz; i++)
//                         arr[i + 1] = arr[i + 2];
//                 }
//                   sz--;
//             }
//             cout << z << endl;
//         }
//         else
//             cout << "0" << endl;
//         if (sz == 2)
//             cout << "1" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int chkarry(int A[], int n)
// {
//     int flag = 1;
//     int x = A[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (x != A[i])
//         {
//             flag = 0;
//             break;
//         }
//     }
//     return flag;
// }

// int checkmax(int A[], int n, int max)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] == max)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main()
// {
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

//         int max = *max_element(A, A + n);
//         int chkmax = checkmax(A, n, max);
//         if (n == 2)
//         {
//             cout << 1 << endl;
//         }
//         else if (chkarry(A, n))
//         {
//             cout << 0 << endl;
//         }
//         else if (chkmax == 1)
//         {
//             int count = 0;
//             while (chkarry(A, n) != 1 || n != 1)
//             {
//                 for (int i = 0; i < n; i++)
//                 {
//                     if (A[i] + A[i + 1] == max)
//                     {
//                         A[i] = max;
//                         for (int j = i + 1; j < (n - 1); j++)
//                         {
//                             A[j] = A[j + 1];
//                         }
//                         count++;
//                     }
//                 }
//                 n--;
//             }

//             if (chkarry(A, n))
//             {
//                 cout << count << endl;
//             }
//         }
//         else if (chkmax > 1)
//         {
//             int count = chkmax - 1;
//             for (int i = 0; i < 1; i++)
//             {
//                 if (A[i] == max)
//                 {
//                     A[i] = max * chkmax;
//                 }
//             }
//             for (int i = 0; i < chkmax - 1; i++)
//             {
//                 if (A[i] == max)
//                 {
//                     A[i] = 0;
//                     for (int j = i + 1; j < (n - 1); j++)
//                     {
//                         A[j] = A[j + 1];
//                     }
//                 }
//             }
//             n = n - chkmax - 1;
//             if (A[0] + A[1] != max * chkmax)
//             {
//                 A[0] = A[0] + A[1];
//                 for (int j = 1; j < (n - 1); j++)
//                 {
//                     A[j] = A[j + 1];
//                 }
//                 count++;
//             }
//             while (chkarry(A, n) != 1 || n != 1)
//             {
//                 for (int i = 0; i < n; i++)
//                 {
//                     if (A[i] + A[i + 1] == max)
//                     {
//                         A[i] = A[i] + A[i + 1];
//                         for (int j = i + 1; j < (n - 1); j++)
//                         {
//                             A[j] = A[j + 1];
//                         }
//                         count++;
//                     }
//                 }
//                 n--;
//             }

//             if (chkarry(A, n))
//             {
//                 cout << count << endl;
//             }
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int ispalind(string s)
// {
//     int start = 0;
//     int end = s.length();
//     while (start < end)
//     {
//         if (s[start] != s[end])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int ispalin(string s)
// {
//     int flag =1;
//     int a = s.length();
//     for (int i = 0; i < a; i++)
//     {
//         if (s[i] != s[a - i]){
//             flag =0;
//             break;
//         }
//     }
//     return flag;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         if (k == 0)
//         {
//             cout << 1 << endl;
//         }
//         else if (ispalin(s))
//         {
//             cout << 1 << endl;
//         }
//         else
//         {
//             cout << 2 << endl;
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
//         if(x/2<=y){
//             cout<<x/2<<endl;
//         }
//         else {
//             cout<<y<<endl;
//         }
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
//         int n, k;
//         cin >> n >> k;
//         if (n > k)
//         {
//             cout << k << endl;
//         }
//         else
//         {
//             while(k>n){
//                 k = k-n-1;
//             }
//             cout<<k<<endl;
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
//         set<int> v;
//         set<int> v1;

//         while(n--){
//             int x,y;
//             cin>>x>>y;
//             v.insert(x);
//             v1.insert(y);
//         }
//         cout<<v.size()+v1.size()<<endl;
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
//         int A[2*n],B[n],C[n];
//         for (int i = 0; i < 2*n; i++)
//         {
//             cin>>A[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//             B[i] = A[i];
//         }
//         for (int i = n; i < 2*n; i++)
//         {
//             C[i] = A[i];
//         }

//         sort(B,B+n);
//         sort(C,C+n);

//         int x=0,y=0;
//         for (int i = 0; i < n; i++)
//         {
//             if(B[i] == i){
//                 x=i+1;
//             }
//             else{
//                 x = i;
//                 continue;
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if(C[i] == i){
//                 y=i+1;
//             }
//             else{
//                 y = i;
//                 continue;
//             }
//         }

//         if(x==y){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }

//     }
//     return 0;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a;
//         cin >> a;
//         int n = 2 * a;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         int mini = *min_element(arr, arr + n);
//         int maxi = *max_element(arr, arr + n);
//         int count = 0;
//         int count1 = 0;

//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] == mini)
//             {
//                 count++;
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] == maxi)
//             {
//                 count1++;
//             }
//         }

//         if (mini < 1)
//         {
//             if (count % 2 == 0 && count1 % 2 == 0)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//         else
//         {
//             cout << "YES" << endl;
//         }
//     }
//         return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin>>x;
//     while (x--)
//     {
//         int a, b;
//         cin >> a >> b;
//         if (a > b)
//             cout << b << endl;
//         else
//             cout << b - a - 1 << endl;
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
//         int n, k;
//         cin >> n >> k;
//         if (n > k)
//         {
//             cout << k << endl;
//         }
//         else
//         {
//             while(k>n){
//                 k = k-n-1;
//             }
//             cout<<k<<endl;
//         }
//     }
//     return 0;
// }