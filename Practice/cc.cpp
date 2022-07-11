#include <bits/stdc++.h>
using namespace std;

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
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int sz, sum, k;
//         int x, a, count = 0;
//         cin >> sz >> sum;
//         vector<int> v1;
//         vector<int>::iterator it;
//         it = v1.end();
//         for (int i = 0; i < sz; i++)
//         {
//             cin >> k;
//             v1.push_back(k);
//             x = x + k;
//         }
//         if (sum > x)
//             cout << "-1" << endl;
//         else
//         {
//             sort(v1.begin(), v1.end());
//             while (sum > a)
//             {
//                 a = a + *it;
//                 count++;
//                 it--;
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
//         int y;
//         cin >> y;
//         int count = 0;
//         int arr[3][3];
//         for (int i = 0; i < 3; i++)
//         {
//             int sum = 0;
//             for (int j = 0; j < 3; j++)
//             {
//                 cin >> arr[i][j];
//                 sum = sum + arr[i][j];
//                 if (sum > y)
//                 {
//                     cout << "-1" << endl;
//                     break;
//                 }
//             }
//         }
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 if (arr[i][j] == arr[j][i] && i != j)
//                     count = count + arr[i][j];
//             }
//         }
//         cout << count / 2 << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define rapid                         \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// int main()
// {
//     rapid int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll A[n], sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//             sum += A[i];
//         }

//         if ((sum & (sum - 1)) == 0)
//         {
//             cout << 0 << endl;
//             continue;
//         }
//         ll mn = 1e8, minIndex;
//         for (int i = 0; i < n; i++)
//         {
//             if (A[i] < mn)
//             {
//                 mn = A[i];
//                 minIndex = i+1;
//             }
//         }
//         sort(A,A+n);
//         ll power = ceil(log2(sum));
//         ll diff = pow(2,power)-sum;
//         ll inc = (diff/A[0])+1;
//         cout<<1<<endl;
//         cout<<1<<" "<<inc<<endl;
//         cout<<minIndex<<endl;

//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y,x1,y1;
//         cin>>x>>y>>x1>>y1;
//         if(y1%1==1){
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
//         int n,x;
//         cin>>n>>x;
//         if(n == 1){
//             cout<<x<<endl;
//         }
//         else{

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
//         int n,k;
//         cin>>n>>k;
//         int x = pow(2,n)-1;
//         cout<< x*(x-1)<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x1, y1, x2, y2, s;
//         cin >> x1 >> y1>> x2 >> y2;
//         if (x1 == x2 || x1 > x2 || x2 > x1)
//         {
//             s = y2 % 2;
//             if (s == 0)
//             {
//                 cout << "NO" << endl;
//             }
//             else
//             {
//                 cout << "yes" << endl;
//             }
//         }
//     }
//     return 0;
// }

// void Insertion(int A[], int n)
// {
//     int i, j, x;

//     for (i = 1; i < n; i++)
//     {
//         j = i - 1;
//         x = A[i];
//         while (j > -1 && A[j] > x)
//         {
//             A[j + 1] = A[j];
//             j--;
//         }
//         A[j + 1] = x;
//     }
// }
// int main()
// {
//     int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;

//     Insertion(A, n);

//     for (i = 0; i < 10; i++)
//         printf("%d ", A[i]);
//     printf("\n");

//     return 0;
// }

// void heapify(int a[],int n,int i){
//     int largest = i;
//     int left = 2*i+1;
//     int right = 2*i+2;
//     if(left<n && a[left]>a[largest]){
//         largest = left;
//     }
//     if(right<n && a[right]>a[largest]){
//         largest = right;
//     }

//     if(largest!=i){
//         swap(a[largest],a[i]);
//         heapify(a,n,largest);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i =n/2-1;i>=0;i--){
//         heapify(a,n,i);
//     }
//     for(int i =0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool isPalindrome(string s)
// {
//     string f = "";
//     for (int i = 0; i < s.size(); i++)
//     {
//         if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//         {
//             f = f + s[i];
//         }
//     }
//     transform(f.begin(), f.end(), f.begin(), ::tolower);
//     int start = 0;
//     int end = f.length() - 1;
//     while (start <= end)
//     {
//         if (s[start] != s[end])
//         {
//             return false;
//         }
//         start--;
//         end--;
//     }
//     return true;
// }
// int main()
// {
//     string s = "A man, a plan, a canal: Panama";
//     int x = isPalindrome(s);
//     cout<<x<<endl;
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
//         if (n % 2 == 1)
//         {
//             cout<< -1<<endl;
//         }
//         else{
//             cout<< 0 <<" "<< 0<<" "<< n/2<<endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;cin>>n;
//     while(n--)
//     {

//     long long r, c;
//     cin >> r >> c;
//     vector<vector<long long >> matrix;
//     long long  i, j;
//     matrix.push_back({1, 0, 0, 1});
//     matrix.push_back({0, 1, 1, 0});
//     matrix.push_back({0, 1, 1, 0});
//     matrix.push_back({1, 0, 0, 1});
//     for(i=0;i<r;i++)
//     {
//         for(j=0; j<c;j++)
//         {
//             cout << matrix[i % 4][j % 4] << " ";
//         }
//         cout << endl;

//     }
// }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         map<int, int> mmap;
//         int ans = 1;
//         int mn, mx;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             mmap[v[i]] = i;
//         }
//         mn = mmap[0];
//         mx = mmap[0];

//         for (int i = 1; i < n; i++)
//         {
//             if (mmap[i] > mx)
//             {
//                 mx = mmap[i];
//             }
//             else if (mmap[i] < mn)
//             {
//                 mn = mmap[i];
//             }
//             else
//             {
//                 ans = ans * (mx - mn + 1 - i);
//                 ans %= 1000000007;
//             }
//         }
//         ans += 1000000007;
//         ans -= 1000000007;
//         ans %= 1000000007;
//         cout << ans << endl;
//     }
//     return 0;
// }