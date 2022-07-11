// #include <bits/stdc++.h>
// using namespace std;
// // int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         if(a+c>b){
//             cout<<a+c<<endl;
//         }
//         else{
//             cout<<b<<endl;
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
//         int n,w;
//         cin>>n>>w;
//         int A[n];
//         for (int i = 0; i < n; i++)
//         {
//         cin>>A[i];
//         }
//         sort(A,A+n,greater<int>());

//         int sum =0,holi=0,flag=0,i=0;
//         while(flag ==0){
//             sum = sum+A[i];
//             if(sum>=w){
//                 flag =1;
//             }
//             holi++;
//             i++;
//         }
//         cout<<n-holi<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         int x = 21-(a+b);
//         if(x<=10 && x>=1){
//             cout<<x<<endl;
//         }
//         else{
//             cout<< -1<<endl;
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
//         if(n%10 ==0){
//             cout<<n/10<<endl;
//         }
//         else{
//             cout<<(n/10)+1<<endl;
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
//         int a=1,b,c,i=1;
//         cin>>b>>c;
//         while((a*b)%c !=0){
//             a = a+1;
//         }
//         cout<<a<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int b,c;
//         cin>>b>>c;
//         int x = __gcd(b,c);
//         int y = c/x;
//         cout<<y<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,sm=0;
//         cin>>n;
//         string s;
//         cin>>s;
//         for (int i = 0; i < n; i++)
//         {
//             if(s[i+1]!= s[i]){
//                 sm++;
//             }
//         }
//         cout<<sm<<endl;
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
//         int n, x;
//         cin >> n >> x;
//         int a[n];
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         sort(a, a + n);
//         map<int, int> m;
//         for (int i = 0; i < n; i++)
//             m[a[i]]++;
//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (m.count(a[i]) == 0)
//                 continue;

//             int tofind = x * a[i];
//             if (m.count(tofind))
//             {
//                 m[tofind]--;
//             }
//             else
//             {
//                 ans++;
//             }
//             m[a[i]]--;
//             if (m[tofind] == 0)
//                 m.erase(tofind);
//             if (m[a[i]] == 0)
//                 m.erase(m[a[i]]);
//         }
//         cout << ans << endl;
//         return 0;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, x;
//         cin >> n >> x;
//         ll a[n];
//         map<ll, ll> m;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//             m[a[i]]++;
//         }
//         sort(a + 1, a + 1 + n);
//         int ans = n;
//         for (int i = 1; i <= n; i++)
//         {
//             if (m[a[i]])
//             {
//                 if (m[a[i] * x])
//                 {
//                     m[a[i]]--;
//                     m[a[i] * x]--;
//                     ans = ans - 2;
//                 }
//             }
//         }
//         cout << ans << endl;
//         return 0;
//     }
// // }

// #include <bits/stdc++.h>
// #include <map>
// #define ll long long
// using namespace std;
// const int N = 1e5 * 2 + 5;
// ll t, a[N], n, x, ans;
// map<ll, ll> b;
// int main()
// {
//     scanf("%lld", &t);
//     while (t--)
//     {
//         b.clear();
//         scanf("%lld %lld", &n, &x);
//         ans = n;
//         for (int i = 1; i <= n; i++)
//         {
//             scanf("%lld", &a[i]);
//             b[a[i]]++;
//         }
//         sort(a + 1, a + 1 + n);
//         for (int i = 1; i <= n; i++)
//         {
//             if (b[a[i]])
//             {
//                 if (b[a[i] * x])
//                 {
//                     b[a[i]]--;
//                     b[a[i] * x]--;
//                     ans -= 2;
//                 }
//             }
//         }
//         printf("%lld\n", ans);
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool isplaindrome(vector<int> &a)
// {
//     int i = 0;
//     int j = a.size() - 1;
//     while (i < j)
//     {
//         if (a[i] != a[j])
//         {
//             return 0;
//         }
//         i++;
//         j--;
//     }
//     return 1;
// }
// bool check(vector<int> &a, int x)
// {
//     vector<int> b;
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (a[i] != x)
//         {
//             b.push_back(a[i]);
//         }
//     }
//     bool ans = isplaindrome(b);
//     return ans;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         bool flag = 1;

//         for (int i = 0; i < n - 1 - i; ++i)
//         {
//             if (a[i]!=a[n-1-i])
//             {
//                 flag = (check(a, a[i]) || check(a, a[n-1-i]));
//                 break;
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
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n;
//         map<int,int> m;
//         for (int i = 0; i < n; i++)
//         {
//             cin>>x;
//             m[x]++?m[-x]++:0;
//         }
//         cout<<m.size()<<endl;
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
//         vector<pair<int,int>>v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>v[i].first;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin>>v[i].second;
//         }
//         sort(v.begin(),v.end());
//         int i=0;
//         while(k>=v[i].first&&i<n){
//             k=k+v[i].second;
//             i++;
//         }
//         cout<<k<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int r,b,d;
//         cin>>r>>b>>d;
//         if(b<r)swap(r,b);

//         if((b+d)/(d+1)<=r){
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
//         long long int n;
//         cin >> n;
//         if (n % 2050 != 0)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             long long int ans = 0;
//             n = n / 2050;
//             while (n > 0)
//             {
//                 ans = ans + n % 10;
//                 n = n / 10;
//             }
//             cout << ans << endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void findWaitingTime(int processes[], int n, int bt[], int wt[])
// {
//     wt[0] = 0;
//     for (int i = 1; i < n; i++)
//         wt[i] = bt[i - 1] + wt[i - 1];
// }
// void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[])
// {
//     for (int i = 0; i < n; i++)
//         tat[i] = bt[i] + wt[i];
// }
// void findavgTime(int processes[], int n, int bt[])
// {
//     int wt[n], tat[n], total_wt = 0, total_tat = 0;
//     findWaitingTime(processes, n, bt, wt);
//     findTurnAroundTime(processes, n, bt, wt, tat);
//     cout << "Processes "
//          << " Burst time "
//          << " Waiting time "
//          << " Turn around time"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         total_wt = total_wt + wt[i];
//         total_tat = total_tat + tat[i];
//         cout << " " << i + 1 << "\t\t" << bt[i] << "\t " << wt[i] << "\t\t " << tat[i] << endl;
//     }
//     cout << "Average waiting time = " << (float)total_wt / (float)n;
//     cout <<endl<< "Average turn around time = " << (float)total_tat / (float)n;
// }
// int main()
// {
//     int processes[] = {1, 2, 3, 4};
//     int n = sizeof processes / sizeof processes[0];
//     int burst_time[] = {10, 5, 8, 13};
//     findavgTime(processes, n, burst_time);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int mat[10][6];
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void arrangeArrival(int num, int mat[][6])
// {
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = 0; j < num - i - 1; j++)
//         {
//             if (mat[j][1] > mat[j + 1][1])
//             {
//                 for (int k = 0; k < 5; k++)
//                 {
//                     swap(mat[j][k], mat[j + 1][k]);
//                 }
//             }
//         }
//     }
// }
// void completionTime(int num, int mat[][6])
// {
//     int temp, val;
//     mat[0][3] = mat[0][1] + mat[0][2];
//     mat[0][5] = mat[0][3] - mat[0][1];
//     mat[0][4] = mat[0][5] - mat[0][2];
//     for (int i = 1; i < num; i++)
//     {
//         temp = mat[i - 1][3];
//         int low = mat[i][2];
//         for (int j = i; j < num; j++)
//         {
//             if (temp >= mat[j][1] && low >= mat[j][2])
//             {
//                 low = mat[j][2];
//                 val = j;
//             }
//         }
//         mat[val][3] = temp + mat[val][2];
//         mat[val][5] = mat[val][3] - mat[val][1];
//         mat[val][4] = mat[val][5] - mat[val][2];
//         for (int k = 0; k < 6; k++)
//         {
//             swap(mat[val][k], mat[i][k]);
//         }
//     }
// }
// int main()
// {
//     int num, temp;
//     cout << "Enter number of Process: ";
//     cin >> num;
//     cout << "...Enter the process ID...\n";
//     for (int i = 0; i < num; i++)
//     {
//         cout << "...Process " << i + 1 << "...\n";
//         cout << "Enter Process Id: ";
//         cin >> mat[i][0];
//         cout << "Enter Arrival Time: ";
//         cin >> mat[i][1];
//         cout << "Enter Burst Time: ";
//         cin >> mat[i][2];
//     }
//     cout << "Before Arrange...\n";
//     cout << "Process ID\tArrival Time\tBurst Time\n";
//     for (int i = 0; i < num; i++)
//     {
//         cout << mat[i][0] << "\t\t" << mat[i][1] << "\t\t" << mat[i][2] << "\n";
//     }
//     arrangeArrival(num, mat);
//     completionTime(num, mat);
//     cout << "Final Result...\n";
//     cout << "Process ID\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n";
//     float total_wt = 0, total_tat = 0;
//     for (int i = 0; i < num; i++)
//     {
//         total_wt += mat[i][4];
//         total_tat += mat[i][5];
//         cout << mat[i][0] << "\t\t" << mat[i][1] << "\t\t" << mat[i][2] << "\t\t" << mat[i][4] << "\t\t"
//              << mat[i][5] << "\n";
//     }
//     cout << "Average Waiting Time :" << total_wt / num << endl
//          << "Average Turn Around Time :" << total_tat / num << endl;
// }

// #include<iostream>
// #include<iomanip>
// #include<algorithm>
// using namespace std;
// class process{
//     public:
//     int arrival_time;
//     int burst_time;
//     int original_burst_time;
//     int waiting_time;
//     int turn_around_time;
//     int completion_time;
//     bool status=false;
// };
// void display(class process a[],int size){
//         cout<<setw(15)<<"Arrival Time"<<setw(15)<<"Burst Time"<<setw(15)<<"Waiting Time"<<setw(20)<<"Turn Around Time"<<setw(20)<<"Completion Time"<<endl;
//         for(int i=0;i<size ;i++){
//             cout<<setw(15)<<a[i].arrival_time<<setw(15)<<a[i].original_burst_time<<setw(15)<<a[i].waiting_time<<setw(20)<<a[i].turn_around_time<<setw(20)<<a[i].completion_time<<endl;
//         }
//     }
// bool ValueCmp(process const & a, process const & b){
//     return a.arrival_time < b.arrival_time;
//     }
// bool Run(class process a[],int size){
//     for(int i=0;i<size;i++){
//         if(!a[i].status){
//             return false;
//         }
//     }
//     return true;
// }
// int nextProcess(class process a[],int size,int t){
//         int index=0,b_time,firstTime=1;
//         for(int i=0;i<size;i++){
//             if(a[i].status==false && a[i].arrival_time<=t){
//                 if(firstTime){
//                     b_time=a[i].burst_time;
//                     index=i;
//                     firstTime=0;
//                 }
//                 else if(a[i].burst_time<b_time){
//                     b_time=a[i].burst_time;
//                     index=i;
//                 }
//             }
//         }
//         return index;
//     }
// int main(){
//     int no_of_process;
//     float TAT=0,WT=0;
//     cout<<"Enter no of processes:-";
//     cin>>no_of_process;
//     process arr[no_of_process];
//     for(int i=0;i<no_of_process;i++){
//         cout<<"Enter arrival time of process "<<i+1<<" :-";
//         cin>>arr[i].arrival_time;
//         cout<<"Enter burst time of process "<<i+1<<" :-";
//         cin>>arr[i].burst_time;
//         arr[i].original_burst_time=arr[i].burst_time;
//     }
//     std::sort(arr,arr+no_of_process,ValueCmp);
//     int currentTime=arr[0].arrival_time;

//     while(!Run(arr,no_of_process)){
//         int i=nextProcess(arr,no_of_process,currentTime);
//         arr[i].burst_time--;
//         currentTime++;
//         if(arr[i].burst_time==0){
//             arr[i].completion_time=currentTime;
//             arr[i].status=true;
//             arr[i].turn_around_time=arr[i].completion_time-arr[i].arrival_time;
//             TAT+=arr[i].turn_around_time;
//             arr[i].waiting_time=arr[i].turn_around_time-arr[i].original_burst_time;
//             WT+=arr[i].waiting_time;
//         }
//     }
//     display(arr,no_of_process);
//     cout<<"Average Turn around time for SRTF:-"<<(TAT/no_of_process)<<endl;
//     cout<<"Average Waiting time for SRTF:-"<<(WT/no_of_process)<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// #define _ ios_base::sync_with_stdio(0);
// #define fs cin.tie(0);
// using namespace std;
// int main()
// {
//     _ fs int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[3];
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> a[i];
//         }
//         sort(a,a+3);
//         int sum = ((n - 1) * a[0]) + a[1];
//         cout << sum << endl;
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
//         int a[n], x, zero = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> x;
//             a[i] = x;
//             if (x == 0)
//             {
//                 zero++;
//             }
//         }
//         cout<<max(zero,n-zero)<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define _ ios_base::sync_with_stdio(0);
// #define fs cin.tie(0);
// using namespace std;
// int main()
// {
//     _ fs int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n], x = 1;
//         for (int i = 0; i < n; i += 2)
//         {
//             a[i] = x;
//             a[i + 1] = 2 * x;
//             x = x + 2;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout<<a[i]<<" ";
//         }
//         cout<<endl;
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
//         int x = n % 3;
//         if (x)
//         {
//             cout << x;
//         }
//         n = n - x;
//         for (; n > 0; n -= 3)
//         {
//             cout << (x == 2 ? "12" : "21");
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
//         int n, a, b;
//         cin >> n >> a >> b;
//         vector<int> A(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> A[i];
//         }
//         if (a == b)
//         {
//             int count = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if (A[i] % a == 0)
//                 {
//                     count++;
//                 }
//             }
//             count % 2 == 0 ? cout << "ALICE" << endl : cout << "BOB" << endl;
//         }
//         else{

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
//         int n,k,x;
//         cin>>n>>x>>k;
//         int z = k/x;
//         if(z<=n){
//             cout<<z<<endl;
//         }
//         else{
//             cout<<n<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void sortString(string &str)
// {
//     sort(str.begin(), str.end());
//     cout << str << endl;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string a;
//         cin >> a;
//         sortString(a);
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
//         int n, flag = 0;
//         cin >> n;
//         string s;
//         cin >> s;
//         string cmp = s;
//         sort(cmp.begin(), cmp.end());
//         for (int i = 0; i < n / 2; i++)
//         {
//             if (s[i] > s[n - i - 1])
//             {
//                 swap(s[i], s[n - i - 1]);
//             }
//             if (cmp == s)
//             {
//                 flag = 1;
//                 break;
//             }
//         }

//         if (flag )
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
//         int n, x;
//         cin >> n >> x;
//         int a[n], s[n];
//         int maxm = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i] >> s[i];
//             if (a[i] <= x)
//             {
//                 maxm = max(maxm, s[i]);
//             }
//         }
//         cout << maxm << endl;
//     }
//     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int u,v,a,s;
//         cin >> u >> v >> a >> s;

//         if(v*v>=(u*u-2*a*s))
//             cout << "yes" << endl;
//         else
//             cout << "no" << endl;
//     }
//     return 0;
// // }
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
//         int arr[n];
//         int count = 0, sum = 0;
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];
//         for (int i = 0; i < n; i++)
//         {
//             sum = sum + arr[i];
//             if (arr[i] == 2)
//                 count++;
//         }
//         if (sum % 2 == 0)
//             cout << "0" << endl;
//         else if (sum % 2 != 0 && count == 1)
//             cout << "1" << endl;
//         else if (sum % 2 != 0 && count == 0)
//             cout << "-1" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
// int main(){
//     cout<<"HEllo"<<endl;
// }
// clasa:
//     A(int a) :a(a),b(a*2)
//     {
//         cout << a << " " << b << endl;
//     }
//     // A(int roll, int age, string name) : roll(roll), age(age), name(name)
//     // {
//     //     cout << "Name of the student :-" << name << "\nRoll No. :- " << roll << "\nAge :-" << age << endl;
//     // }
// };
// int main()
// {
//     A(2);
// // }

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
//         int x = n % 10;
//         if (n % 5 != 0)
//         {
//             cout << -1 << endl;
//         }
//         else if (n % 10 == 0)
//         {
//             cout << n / 10 << endl;
//         }
//         else
//         {
//             cout << n / 10 + x / 5 << endl;
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
//         int n, x;
//         cin >> n >> x;
//         int y = n / 3;
//         if (n % 3 == 0)
//         {
//             int ans = pow(2, y);
//             cout << ans * x << endl;
//         }
//         else
//         {
//             int ans = pow(2, y);
//             int z = n % 3;
//             cout << (ans + z) * x << endl;
//         }
//     }
//     return 0;
// }

// - - - - 1 - - - - -
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x;
//         cin >> n >> x;
//         cout << 2*n - x + 1 << endl;
//     }
//     return 0;
// }

// - - - - 2 - - - - -

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, zero = 0, one = 0;
//         cin >> n;
//         string s;
//         cin >> s;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '1')
//             {
//                 one++;
//             }
//             else
//             {
//                 zero++;
//             }
//         }
//         if (zero == one)
//         {
//             cout << (zero + one) << endl;
//         }
//         else if (zero == 0 || one == 0)
//         {
//             cout << 1 << endl;
//         }
//         else
//         {
//             if (zero < one)
//             {
//                 cout << ((2 * zero) + 1) << endl;
//             }
//             else
//             {
//                 cout << ((2 * one) + 1) << endl;
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
//         if (n % 2 == 0)
//         {
//             cout << n / 2 << endl;
//         }
//         else
//         {
//             cout << -((n + 1) / 2) << endl;
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
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int xr = 0, ad = 0, pair = 0;
//         // sort(a, a + n);
//         // for (int i = 0; i < n; i++)
//         // {
//         //     if ((a[i] ^ a[i+1]) < (a[i] & a[i+1]))
//         //     {
//         //         pair++;
//         //     }
//         // }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if ((a[i] ^ a[j]) < (a[i] & a[j]))
//                 {
//                     pair++;
//                 }
//             }
//         }
//         cout << pair << endl;
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
//         int w1, w2, x1, x2, m;
//         cin >> w1 >> w2 >> x1 >> x2 >> m;
//         int x = w2 - w1;
//         int y = x1 * m, z = x2 * m;
//         if (x >= y && x <= z)
//         {
//             cout << 1 << endl;
//         }
//         else
//         {
//             cout << 0 << endl;
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
//        int n;
//        cin>>n;
//        int o =1;
//        for (int i = 2; i <=n; i++)
//        {
//            o = o | i;
//        }
//        cout<<o<<endl;
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
//         int x = n,a=0;
//         while(n>0){
//             a++;
//             n=n/2;
//             cout<<n;
//         }
//         cout<<endl<<x-a<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int m,n,k;
//         cin>>m>>n>>k;
//         int x = n*k;
//         if(x<m){
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
//         int n, p, x, y;
//         cin >> n >> p >> x >> y;
//         int a[n], one = 0, zero = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 1; i <=p; i++)
//         {
//             if (a[i] == 1)
//             {
//                 one++;
//             }
//             else
//             {
//                 zero++;
//             }
//         }

//         int z = x * zero + y * one;
//         cout << z << endl;
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
//         map<int, int> m;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             m[a[i]]++;
//         }
//         map<int, int>::iterator itr;
//         cout << "\nThe map gquiz1 is : \n";
//         cout << "\tKEY\tELEMENT\n";
//         for (itr = m.begin(); itr != m.end(); ++itr)
//         {
//             cout << '\t' << itr->first << '\t' << itr->second
//                  << '\n';
//         }
//         cout << endl;
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
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
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
//         int n, x;
//         cin >> n >> x;
//         if (n > x)
//         {
//             cout << 2 * n - x << endl;
//         }
//         else
//         {
//             cout << x - n << endl;
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
//         string s;
//         cin >> s;
//         if (x > y)
//         {
//             sort(s.begin(), s.end(), greater<char>());
//         }
//         else
//         {
//             sort(s.begin(), s.end());
//         }
//         int zo = 0, oz = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '0' && s[i + 1] == '1')
//             {
//                 zo++;
//             }
//             else if (s[i] == '1' && s[i + 1] == '0')
//             {
//                 oz++;
//             }
//         }

//         cout << x * zo + y * oz << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string st = "Abhay saini";
//     ofstream out("sample.txt");
//     out<<st;
//     out.close();
//     string st2;
//     ifstream in("sample.txt");
//     getline(in,st2);

//     cout<<st2;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     // ofstream fout;
//     // fout.open("sample.txt");
//     // string s = "Carrier sense multiple access with collision avoidance. \nThe process of collisions detection involves sender receiving acknowledgement signals. If there is just one signal(its own) then the data is successfully sent \nbut if there are two signals(its own and the one with which it has collided) then it means a collision has occurred. \nTo distinguish between these two cases, collision must have a lot of impact on received signal.\nHowever it is not so in wired networks, so CSMA/CA is used in this case. ";
//     // fout<<s;
//     // fout.close();
//     // ifstream fin;
//     // string st2;
//     // fin.open("sample.txt");
//     // getline(fin,st2);
//     // cout<<st2;
//     fstream file;
//     file.open("sample.txt",ios::in|ios::out);
//     string st;
//     file<<st;
//     cout<<st;

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         if (c >= a && d >= b)
//         {
//             cout << "POSSIBLE"<<endl;
//         }
//         else
//         {
//             cout << "IMPOSSIBLE"<<endl;
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
//         int n, x;
//         cin >> n >> x;
//         int a[n - 1], sum = 0;
//         for (int i = 0; i < n - 1; i++)
//         {
//             cin >> a[i];
//             sum += a[i];
//         }
//         int y = (x * n) - sum;
//         if (y < 0)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             cout << y << endl;
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
//         long int n, neg = 0, pos = 0;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (a[i] < 0)
//             {
//                 neg++;
//             }
//             else if(a[i]>0)
//             {
//                 pos++;
//             }
//         }
//         int x = ((neg * (neg - 1)) / 2);
//         int y = ((pos * (pos - 1)) / 2) ;
//         cout << x+y << endl;
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
//         if (b / a > 1)
//             cout << a << " " << a * 2 << endl;
//         else
//             cout << "-1" << endl;
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
//         int n, x;
//         cin >> n >> x;
//         int a[n];
//         if (n == 1)
//         {
//             cout << x << endl;
//         }
//         else
//         {
//             int sum = 0;
//             for (int i = 0; i < n - 1; i++)
//             {
//                 a[i] = i + 1;
//                 sum += a[i];
//             }
//             int y = x * n - sum;
//             for (int i = 0; i < n-1; i++)
//             {
//                 cout << a[i] << " ";
//             }
//             cout<<y<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n, x;
//     cin >> n >> x;
//     for (int i = 1; i < n ; i++)
//       cout << i << " ";
//     cout << (n * x) - n * (n - 1) / 2 << endl;
//   }
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s,t;
//         cin>>s>>t;
//         bool x = s.find(t);
//         if(x ==1){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
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
//         if (n >= 1900)
//         {
//             cout << "Division 1" << endl;
//         }
//         else if (n >= 1600 && n <= 1899)
//         {
//             cout << "Division 2" << endl;
//         }
//         else if (n >= 1400 && n <= 1599)
//         {
//             cout << "Division 3" << endl;
//         }
//         else if (n <= 1399)
//         {
//             cout << "Division 4" << endl;
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
//         int a[n];
//         map<int, int> m;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             m[a[i]]++;
//         }
//         int b,flag =0;
//         for (auto x : m)
//         {
//             if (x.second >= 3)
//             {
//                 b = x.first;
//                 flag =1;
//             }
//         }

//         if (flag)
//         {
//             cout << b << endl;
//         }
//         else
//         {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// int check(int b[],int n){
//     int flag =1;
//     for (int i = 0; i < n; i++)
//     {
//         if(){

//         }
//     }

// }

// bool areSame(int b[], int n)
// {
//     int first = b[0];

//     for (int i = 1; i < n; i++)
//         if (b[i] != first)
//             return 0;
//     return 1;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n], b[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (a[i] % 2 == 0)
//             {
//                 b[i] = 1;
//             }
//             else
//             {
//                 b[i] = 0;
//             }
//         }

//         int x = areSame(b, n);

//         if (x)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             for (int i = 0; i < n; i += 2)
//             {
//                 a[i] += 1;
//             }
//             int flag = 1;
//             if (a[0] % 2 == 0)
//             {
//                 for (int i = 0; i < n; i ++)
//                 {
//                     if (a[i] % 2 != 0)
//                     {
//                         flag = 0;
//                         break;
//                     }
//                 }
//             }
//             else
//             {
//                 for (int i = 0; i < n; i ++)
//                 {
//                     if (a[i] % 2 == 0)
//                     {
//                         flag = 0;
//                         break;
//                     }
//                 }
//             }
//             flag ? cout << "YES" << endl: cout << "NO" << endl;

//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t,flag=1;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int n = s.size();
//         int flag =1;
//         for (int i = 0; i < n; i++)
//         {
//             if(s[i]!=s[i-1]&&s[i]!=s[i+1]){
//                 flag =0;
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
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x, y;
//         cin >> x >> y;
//         if (x == y)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             cout << abs(x - y) << endl;
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
//         if (k == 0)
//         {
//             if (n % 4 == 0)
//             {
//                 cout << "OFF" << endl;
//             }
//             else
//             {
//                 cout << "ON" << endl;
//             }
//         }
//         else
//         {
//             if (n == 0 || n % 4 == 0)
//             {
//                 cout<<"ON"<<endl;
//             }
//             else{
//                 cout<<"Ambiguous"<<endl;
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
//         int n, x;
//         cin >> n >> x;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }

//         if (x <= n)
//         {
//             cout << n << endl;
//         }
//         else{
//             int z = *min_element(a,a+n);
//             cout<<max(n,(int)x/z)<<endl;
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
//         if(z%x==0 && z%y==0){
//             cout<<"ANY"<<endl;
//         }
//         else if(z%x==0){
//             cout<<"CHICKEN"<<endl;
//         }
//         else if(z%y==0){
//             cout<<"DUCK"<<endl;
//         }
//         else{
//             cout<<"NONE"<<endl;
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
//         if (n <= 4)
//         {
//             cout << n << endl;
//         }
//         else if (n % 5 == 0)
//         {
//             int x = n / 5;
//             cout << n - x << endl;
//         }
//         else
//         {
//             int x = n / 4;
//             cout << n - x + 1 << endl;
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
//         int x = n/5;
//         cout<<n-x<<endl;
//     }
//     return 0;
// }
// CPP program to demonstrate optimal page
// replacement algorithm.
// #include <bits/stdc++.h>
// using namespace std;
// bool search(int key, vector<int> &fr)
// {
//     for (int i = 0; i < fr.size(); i++)
//         if (fr[i] == key)
//             return true;
//     return false;
// }

// int predict(int pg[], vector<int> &fr, int pn, int index)
// {
//     int res = -1, farthest = index;
//     for (int i = 0; i < fr.size(); i++)
//     {
//         int j;
//         for (j = index; j < pn; j++)
//         {
//             if (fr[i] == pg[j])
//             {
//                 if (j > farthest)
//                 {
//                     farthest = j;
//                     res = i;
//                 }
//                 break;
//             }
//         }
//         if (j == pn)
//             return i;
//     }

//     return (res == -1) ? 0 : res;
// }

// void optimalPage(int pg[], int pn, int fn)
// {
//     vector<int> fr;

//     int hit = 0;
//     for (int i = 0; i < pn; i++)
//     {

//         if (search(pg[i], fr))
//         {
//             hit++;
//             continue;
//         }
//         if (fr.size() < fn)
//             fr.push_back(pg[i]);

//         else
//         {
//             int j = predict(pg, fr, pn, i + 1);
//             fr[j] = pg[i];
//         }
//     }
//     cout << "No. of hits = " << hit << endl;
//     cout << "No. of misses = " << pn - hit << endl;
// }

// int main()
// {
// int n;
// cout << "Enter the No. of Pages :-" << endl;
// cin >> n;
// int a[n];
// for (int i = 0; i < n; i++)
// {
//     cin >> a[i];
// }
// int frames;
// cout << "Enter the No. of Frames :-" << endl;
// cin >> frames;
//     optimalPage(a, n, frames);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int pageFaults(int pages[], int n, int capacity)
// {
//     unordered_set<int> s;

//     unordered_map<int, int> indexes;

//     int page_faults = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s.size() < capacity)
//         {
//             if (s.find(pages[i]) == s.end())
//             {
//                 s.insert(pages[i]);
//                 page_faults++;
//             }
//             indexes[pages[i]] = i;
//         }

//         else
//         {
//             if (s.find(pages[i]) == s.end())
//             {
//                 int lru = INT_MAX, val;
//                 for (auto it = s.begin(); it != s.end(); it++)
//                 {
//                     if (indexes[*it] < lru)
//                     {
//                         lru = indexes[*it];
//                         val = *it;
//                     }
//                 }
//                 s.erase(val);
//                 s.insert(pages[i]);
//                 page_faults++;
//             }
//             indexes[pages[i]] = i;
//         }
//     }

//     return page_faults;
// }
// int main()
// {
//     int n;
//     cout << "Enter the No. of Pages :-" << endl;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int frames;
//     cout << "Enter the No. of Frames :-" << endl;
//     cin >> frames;
//     cout << pageFaults(a, n, frames);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, n, a[50], frame[10], no, k, avail, count = 0;
//     printf("\n ENTER THE NUMBER OF PAGES:\n");
//     scanf("%d", &n);
//     printf("\n ENTER THE PAGE NUMBER :\n");
//     for (i = 1; i <= n; i++)
//         scanf("%d", &a[i]);
//     printf("\n ENTER THE NUMBER OF FRAMES :");
//     scanf("%d", &no);
//     for (i = 0; i < no; i++)
//         frame[i] = -1;
//     j = 0;

//     for (i = 1; i <= n; i++)
//     {
//         avail = 0;
//         for (k = 0; k < no; k++)
//             if (frame[k] == a[i])
//                 avail = 1;
//         if (avail == 0)
//         {
//             frame[j] = a[i];
//             j = (j + 1) % no;
//             count++;
//         }
//         printf("\n");
//     }
//     printf("Page Fault Is %d", count);
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
//         int x = 100;
//         int z = 0.1*n;
//         cout<<max(x,z)<<endl;
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
//         if (b == a*2)
//         {
//             cout << "ANY" << endl;
//         }
//         else if (b<=a*2)
//         {
//             cout << "FIRST" << endl;
//         }
//         else
//         {
//             cout << "SECOND" << endl;
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
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (a[i] > a[i + 1])
//             {
//                 int temp = a[i];
//                 a[i] = a[i + 1];
//                 a[i + 1] = temp;
//                 break;
//             }
//         }
//         int count = 0;
//         for (int i = 0; i < n-1; i++)
//         {
//             if (a[i] > a[i + 1])
//             {
//                 count++;
//             }
//         }
//         if (count == 0)
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
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] - a[i + 1] <=0)
//             {
//                 count++;
//             }
//         }
//         if (count >1)
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
//         int n;
//         cin >> n;
//         int arr[n];
//         int count = 0;
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];
//         for (int i = 0; i < n - 1; i++)
//             if (arr[i + 1] - arr[i] < 0)
//                 count++;
//         if (count > 1)
//             cout << "no" << endl;
//         else
//             cout << "yes" << endl;
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
//         string s;
//         cin >> s;
//         bool flag = (s.back() == 'B');
//         int now = 0;
//         for (auto i : s)
//         {
//             if (i == 'A')
//                 now++;
//             else
//                 now--;
//             if (now < 0)
//                 flag = 0;
//         }
//         flag ? cout << "Yes" << endl : cout << "No" << endl;
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
//         if(n==1){
//             cout<< 0 <<endl;
//         }
//         else if (n % 2 )
//         {
//             cout << 1 << endl;
//         }
//         else
//         {
//             cout << -1 << endl;
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
//         int  x = 0;
//         string s;
//         cin>>s;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '0' || s[i] == '5')
//             {
//                 x = 1;
//             }
//         }
//         x ? cout << "YES" << endl : cout << "NO" << endl;
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
//         int temp = n, temp1 = n + 1, sum = 0, sum1 = 0;
//         while (temp != 0)
//         {
//             sum = sum + temp % 10;
//             temp = temp / 10;
//         }

//         while (temp1 != 0)
//         {
//             sum1 = sum1 + temp1 % 10;
//             temp1 = temp1 / 10;
//         }

//         if((sum%2)==(sum1%2)){
//             cout<<n+2<<endl;
//         }
//         else{
//             cout<<n+1<<endl;
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
//         int x = 3 * (n - 1);
//         int y;
//         n % 2 ? y = 3 * (n / 2) : y = 3 * ((n - 1) / 2);
//         cout << x - y << endl;
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
//         if (n == 2 || n == 3)
//         {
//             cout << n - 1 << endl;
//         }
//         else
//         {
//             cout << n << endl;
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
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (a[j] < a[i])
//                 {
//                     int temp = a[i];
//                     a[i] = a[j];
//                     a[j] = temp;
//                 }
//             }
//         }
//         bool x = 0;
//         for (int i = 1; i < n - 1; i++)
//         {
//             if (a[i] - a[i - 1] == 2 * (a[i + 1] - a[i]))
//             {
//                 x = 1;
//             }
//         }
//         int b[n - 1];
//         for (int i = 0; i < n ; i++)
//         {
//             b[i] = a[i + 1] - a[i];
//         }
//         // bool y = 1;
//         // for (int i = 0; i < n - 1; i++)
//         // {
//         //     if (b[i+1]/b[i] % 2 != 0)
//         //     {
//         //         y = 0;
//         //     }
//         // }

//         // if (x || y)
//         // {
//         //     cout << "YES" << endl;
//         // }
//         // else
//         // {
//         //     cout << "NO" << endl;
//         // }

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
//         int a, b, c, x, y;
//         cin >> a >> b >> c >> x >> y;
//         bool z = (min(a, x) + min(b, y) + c) >= x + y;
//         z ? cout << "YES" << endl : cout << "NO" << endl;
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
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         if (n == 1)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             int count = 0;
//             for (int i = n - 1; i > 0; i--)
//             {

//                 if (a[i + 1] == 0)
//                 {
//                     cout << -1 << endl;
//                     break;
//                 }
//                 while(a[i]>=a[i+1]){
//                     a[i]=a[i]/2;
//                     count++;
//                 }
//             }
//             cout << count << endl;
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
        int a[n];
        map<int, int> freq;
        int des=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j <n; j++)
            {
                if(a[i]!=a[j]){
                    des++;
                }
            }
            
        }
        
        int x = max_element(freq.begin(), freq.end())->second;
        for (int i = 0; i < des; i++)
        {
            /* code */
        }
        
    }
    return 0;
}
