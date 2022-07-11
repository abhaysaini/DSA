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
//         {
//             cin >> A[i];
//         }
//         int x = *max_element(A, A + n);
//         int y =0;
//         for (int i = 1; i < n - 1; i++)
//         {

//         }
//         cout<<y<<endl;
//         for (int i = 0; i < n; i++)
//         {
//             cout << A[i] << " ";
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
//         int A[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>A[i];
//         }
//         int a=A[0],b=A[1];
//         int x = (a|b);
//         for (int i = 2; i < n; i++)
//         {
//             int y = A[i];
//             int maxy = (x|y);
//             x =max(x,maxy);
//         }
//         cout<<x<<endl;
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
//         int n,flag =0;
//         set <int> s;
//         cin >> n;
//         int A[n];

//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             A[i] = x;
//             int y = pow(2, x);
//             s.insert(y);
//         }

//         if (s.size() == n)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
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
//         string s;
//         cin>>s;
//         int flagr =0,flagg=0,flagb=0;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if(s[i]=='r'){
//                 for (int j = i+1; j<s.length();j++)
//                 {
//                     if(s[j]=='R'){
//                         flagr=1;
//                     }
//                 }

//             }
//             if(s[i]=='g'){
//                 for (int j = i+1; j<s.length();j++)
//                 {
//                     if(s[j]=='G'){
//                         flagg=1;
//                     }
//                 }

//             }
//             if(s[i]=='b'){
//                 for (int j = i+1; j<s.length();j++)
//                 {
//                     if(s[j]=='B'){
//                         flagb=1;
//                     }
//                 }

//             }
//         }

//         if(flagr&&flagg&&flagb){
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
//         int n;
//         cin>>n;
//         for (int i = 1; i <= n; i++)
//         {
//             cout << i << " ";
//             for (int j = n; j >= 1; j--)
//             {
//                 if (j != i)
//                 {
//                     cout << j << " ";
//                 }
//             }
//             cout << endl;
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
//         int x1,y1,x2,y2,x3,y3;
//         cin>>x1>>y1>>x2>>y2>>x3>>y3;
//         if((y1 == y2)&&(y3<y1)){
//             cout<<(abs(x1-x2))<<endl;
//         }
//         else if((y2 == y3)&&(y1<y2)){
//             cout<<(abs(x2-x3))<<endl;
//         }
//         else if((y1 == y3)&&(y2<y1)){
//             cout<<(abs(x1-x3))<<endl;
//         }
//         else{
//             cout<<0<<endl;
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
//         int A[n];
//         set <int> s;
//         for (int i = 0; i < n; i++)
//         {
//            int x;
//            cin>>x;
//             A[i]=x;
//             s.insert(x);
//         }
//         for (int i = 0; i < s.size(); i++)
//         {
//             cout<<s.size()<<" ";
//         }
//         for (int i = s.size()+1; i <=n; i++)
//         {
//             cout<<i<<" ";
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
//         int a[n], b[n], flag = 1;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//         sort(a, a + n);
//         sort(b, b + n);

//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] - b[i]!=0 && b[i]-a[i]!=1)
//             {
//                 flag = 0;
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
//             cin >> a[i];
//         int height = 1;
//         int flag = 1;

//         for (int i = 0; i < n; ++i)
//         {
//             if (a[i] == 1)
//             {
//                 height += 1;
//                 if (a[i + 1] == 1)
//                     height += 4;
//             }
//             if (a[i] == 0)
//             {
//                 if (a[i + 1] == 0)
//                 {
//                     height = -1;
//                     break;
//                 }
//             }
//         }
//         cout << height << endl;
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
//         n % 4 == 0 ? cout << "Good" << endl : cout << "Not Good" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     cout << (x - y) + (y / 2) << endl;
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
//         int sum1 = 0, sum2 = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         if(n==1){
//             cout<<a[0]<<endl;
//             break;
//         }
//         else if (n % 2 == 0)
//         {
//             for (int i = 0; i < n / 2; i++)
//             {
//                 sum1 = sum1 + a[i];
//             }
//             for (int i = n / 2; i < n; i++)
//             {
//                 sum2 = sum2 + a[i];
//             }
//         }
//         else
//         {
//             for (int i = 0; i < n / 2; i++)
//             {
//                 sum1 = sum1 + a[i];
//             }
//             for (int i = n / 2 + 1; i < n; i++)
//             {
//                 sum2 = sum2 + a[i];
//             }
//         }

//         cout << max(sum1, sum2) << endl;
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
//         int a[n], count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (a[i] > 10 && a[i] < 60)
//             {
//                 count++;
//             }
//         }
//         cout << count << endl;
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
//         int x, y, x1, y1;
//         cin >> x >> y >> x1 >> y1;
//         float car1 = x1 / x, car2 = y1 / y;
//         if (car1 < car2)
//         {
//             cout << -1 << endl;
//         }
//         else if (car1 == car2)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             cout << 1 << endl;
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
//         int count = 8;
//         int x;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> x;
//             if (x != 6 && x != 7 && x != 13 && x != 14 && x != 20 && x != 21 && x != 27 && x != 28)
//             {
//                 count++;
//             }
//         }

//         cout << count << endl;
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
//         if (n == 1 || n == 2)
//         {
//             cout << -1 << endl;
//         }
//         else if (n % 2 == 1)
//         {
//             int m = n;
//             for (int i = 0; i < n; i++)
//             {
//                 cout << m << " ";
//                 m--;
//             }
//         }
//         else
//         {
//             for (int i = 1; i <= n - 3; i++)
//             {
//                 cout << i << " ";
//             }
//             cout << n << " " << n - 2 << " " << n - 1 << endl;
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
//         int n,s;
//         cin>>n>>s;
//         if(s==0){
//             cout<< 0<<endl;
//         }
//         else if (s == 1){
//             cout<< 1 <<endl;
//         }
//         else{
//             int x = n*n;
//             cout<<(s/(n*n))<<endl;
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
//         long long n,s;
//         cin>>n>>s;
//         cout<<(s/(n*n))<<endl;
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// #include <unordered_map>
// #define _ ios_base::sync_with_stdio(0);
// #define fs cin.tie(0);
// using namespace std;

// void solve()
// {
//     long long int n;
//     cin >> n;
//     vector<long long int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end());
//     long long int red = v[n - 1], blue = v[0] + v[1];
//     if (red > blue)
//     {
//         cout << "YES" << endl;
//         return;
//     }
//     long long int start = 2, end = n - 2;
//     while (start < end)
//     {
//         red += v[end];
//         blue += v[start];
//         start++;
//         end--;
//         if (red > blue)
//         {
//             cout << "YES" << endl;
//             return;
//         }
//     }
//     cout << "NO" << endl;
// }

// int main()
// {
//     _ fs int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #include <unordered_map>
// #define _ ios_base::sync_with_stdio(0);
// #define fs cin.tie(0);
// using namespace std;

// int main()
// {
//     _ fs int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n;
//         cin >> n;
//         vector<long long int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         sort(v.begin(), v.end());
//         long long int red = v[n - 1], blue = v[0] + v[1];
//         if (red > blue)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             long long int start = 2, end = n - 2;
//             while (start < end)
//             {
//                 red += v[end];
//                 blue += v[start];
//                 start++;
//                 end--;
//                 if (red > blue)
//                 {
//                     cout << "YES" << endl;
//                     break;
//                 }
//             }
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
//         int a[n], b[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (b[i] > a[i])
//             {
//                 swap(b[i], a[i]);
//             }
//         }
//         int x = *max_element(a, a + n), y = *max_element(b, b + n);
//         cout << x * y << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     double A, B, C, X;
//     cin >> A >> B >> C >> X;
//     if (X <= A)
//     {
//         cout << "1.000000000000" << endl;
//     }
//     else if (X >= A + 1 && X <= B)
//     {
//         cout << C / (B - A) << endl;
//     }
//     else
//     {
//         cout << "0.000000000000" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include<algorithm>
// using namespace std;
// void sortString(string &str)
// {
//     sort(str.begin(), str.end());
//     cout << str;
// }
// int main()
// {
//     string s;
//     cin >> s;
//     sortString(s);
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
//         if((x-y)%2==0){
//             cout<<"Janmansh"<<endl;
//         }
//         else{
//             cout<<"Jay"<<endl;
//         }
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	   long int n,sum=0,count=0;
// 	    cin>>n;
// 	    int a[n];
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        cin>>a[i];
// 	        if(a[i]>0)
// 	        {
// 	            sum++;
// 	        }
// 	        else if(a[i]<0){
// 	            count++;
// 	        }

// 	    }
// 	    cout<<((sum*(sum-1))/2)+((count*(count-1))/2)<<endl;
// 	}
// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace  std;
// int main(){
// 	int a[6]={1,2,3,4,5,6};

// 	for (int i = 0; i < 6; i+=2)
// 	{
// 		a[i]+=1;
// 	}
// 	for (int i = 0; i < 6; i++)
// 	{
// 		cout<<a[i]<<" ";
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>

// #define ll long long

// using namespace std;

// int main()
// {
//     ll t;
//     cin >> t;
//     ll temp = t;
//     while (t--)
//     {
//         int n, r;
//         cin >> n >> r;
//         int count = 0;
//         vector<int> a, b;
//         vector<pair<int, pair<int, int>>> v;

//         for (int i = 0; i < n; i++)
//         {
//             int zz;
//             cin >> zz;
//             a.push_back(zz);
//         }

//         for (int i = 0; i < n; i++)
//         {
//             int zz;
//             cin >> zz;
//             b.push_back(zz);
//         }

//         for (int i = 0; i < n; i++)
//         {
//             v.push_back(make_pair(a[i] - b[i], make_pair(a[i], b[i])));
//         }

//         sort(v.begin(), v.end());
//         for (int i = 0; i < n; i++)
//         {
//             while (r >= v[i].second.first)
//             {
//                 int ee = (r) / v[i].second.first;
//                 ee = ee + (1 & 0);
//                 count += ee;
//                 count += (1 & 0);
//                 r -= (ee * (v[i].second.first));
//                 r -= (1 & 0);
//                 r += (ee * (v[i].second.second));
//                 r += (1 & 0);
//             }
//         }

//         cout << count << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// #define FA ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// using namespace std;
// int main()
// {
//     FA;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         int count = 0;
//         a > b ? 0 : count++;
//         a > c ? 0 : count++;
//         a > d ? 0 : count++;
//         cout<<count<<endl;
//     }
// }

// #include <bits/stdc++.h>
// #define FA ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// using namespace std;
// int main()
// {
//     FA;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x,s=0;
//         cin >> n;
//         for(int i =0;i<n;i++){
//             cin>>x;
//             s+=(x%2);
//         }
//         cout<<min(s,n-s)<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// void addEdge(vector<int> adj[],int u,int v){
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }

// void display(vector<int>adj[],int V){
//     for(int i=0;i<V;i++){
//         cout<< "Adacency of vertex :- "<<i<< endl;
//         for(auto x: adj[i]){
//             cout<< x << " ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the No. of Vertex :-"<<endl;
//     cin>>n;
//     vector<int> adj[n];
//     addEdge(adj, 0, 1);
//     addEdge(adj, 0, 4);
//     addEdge(adj, 1, 2);
//     addEdge(adj, 1, 3);
//     addEdge(adj, 1, 4);
//     addEdge(adj, 2, 3);
//     addEdge(adj, 3, 4);
//     display(adj,n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void BFS(int vtx, int A[][8], int n)
// {
//     queue<int> Q;
//     int visited[8]{0};

//     // Initial
//     cout << vtx << ", " << flush; // Visit vertex
//     visited[vtx] = 1;
//     Q.emplace(vtx);

//     // Explore
//     while (!Q.empty())
//     {
//         int u = Q.front(); // Vertex u for exploring
//         Q.pop();
//         for (int v = 1; v <= n; v++)
//         { // Adjacent vertices of vertex u
//             if (A[u][v] == 1 && visited[v] == 0)
//             {                               // Adjacent vertex and not visited
//                 cout << v << ", " << flush; // Visit vertex
//                 visited[v] = 1;
//                 Q.emplace(v);
//             }
//         }
//     }
//     cout << endl;
// }

// int main()
// {

//     int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
//                    {0, 0, 1, 1, 1, 0, 0, 0},
//                    {0, 1, 0, 1, 0, 0, 0, 0},
//                    {0, 1, 1, 0, 1, 1, 0, 0},
//                    {0, 1, 0, 1, 0, 1, 0, 0},
//                    {0, 0, 0, 1, 1, 0, 1, 1},
//                    {0, 0, 0, 0, 0, 1, 0, 0},
//                    {0, 0, 0, 0, 0, 1, 0, 0}};

//     cout << "Vertex: 1 -> " << flush;
//     BFS(1, A, 8);

//     cout << "Vertex: 4 -> " << flush;
//     BFS(4, A, 8);

//     return 0;
// }

// class Solution {
// public:
//     bool validPath(int n, vector<vector<int>>& e, int source, int destination) {
//         vector<int> adj[n];
//         vector<bool> v(n+1,0);
//         queue<int> q;

//         for(int i =0;i<e.size();i++){
//            int x = e[i][0] ;
//            int y = e[i][1] ;
//             adj[x].push_back(y);
//             adj[y].push_back(x);
//         }

//         v[source]=1;
//         q.emplace(source);

//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             for(auto it:adj[node]){
//                 if(!v[it]){
//                     q.emplace(it);
//                     v[it]=1;
//                 }
//             }
//         }
//         if(v[destination]==1){
//             return 1;
//         }
//         return 0;
//     }
// };

// #include <bits/stdc++.h>
// #define FA ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// using namespace std;
// int main()
// {
//     FA;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         vector<int> v;
//         int count = 0;
//         for (int i = 0; i < 4; i++)
//         {
//             int x;
//             cin >> x;
//             v.push_back(x);
//             if (x == 1)
//             {
//                 count++;
//             }
//         }
//         int ans =0;
//         if(count==4){
//             ans=2;
//         }
//         else if(count==0){
//             ans =0;
//         }
//         else{
//             ans=1;
//         }
//         cout<<ans<<endl;
//     }
// }

// #include <bits/stdc++.h>
// #define FA ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// using namespace std;
// int main()
// {
//     FA;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x, i, j;
//         cin >> x;
//         cout << 2 << endl;
//         for (i = 1; i <= x; i += 2)
//         {
//             for (j = i; j <= x; j *= 2)
//             {
//                 cout << j << " ";
//             }
//         }
//         cout << endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// void DFS(vector<int> adj[],int vtx,vector<bool>v){
//     v[vtx]=1;
//     cout<< vtx<<" ";
//     for(int i =0;i<adj[vtx].size();i++){
//         if(!v[adj[vtx][i]]){
//             DFS(adj,adj[vtx][i],v);
//         }
//     }
// }
// void addEdge(vector<int> adj[],int x,int y){
//     adj[x].push_back(y);
// }
// int main(){
//     int n ;
//     cout<<"Enter the total No. of vertex :- "<<endl;
//     cin>>n;
//     vector<int> adj[n];
//     vector<bool> v(n+1,0);
//     addEdge(adj,0,1);
//     addEdge(adj,0,2);
//     addEdge(adj,1,2);
//     addEdge(adj,2,0);
//     addEdge(adj,2,3);
//     addEdge(adj,3,3);
//     DFS(adj,2,v);
//     cout<<endl;
//     DFS(adj,1,v);
//     cout<<endl;
//     DFS(adj,3,v);
//     cout<<endl;
//     DFS(adj,0,v);
//     cout<<endl;
// }


// // C++ program to print DFS
// // traversal for a given given
// // graph
// // C++ program to print DFS traversal from
// // a given vertex in a given graph
// // #include <bits/stdc++.h>
// // using namespace std;

// // // Graph class represents a directed graph
// // // using adjacency list representation
// // class Graph {
// // public:
// // 	map<int, bool> visited;
// // 	map<int, list<int> > adj;

// // 	// function to add an edge to graph
// // 	void addEdge(int v, int w);

// // 	// DFS traversal of the vertices
// // 	// reachable from v
// // 	void DFS(int v);
// // };

// // void Graph::addEdge(int v, int w)
// // {
// // 	adj[v].push_back(w); // Add w to v’s list.
// // }

// // void Graph::DFS(int v)
// // {
// // 	// Mark the current node as visited and
// // 	// print it
// // 	visited[v] = true;
// // 	cout << v << " ";

// // 	// Recur for all the vertices adjacent
// // 	// to this vertex
// // 	list<int>::iterator i;
// // 	for (i = adj[v].begin(); i != adj[v].end(); ++i)
// // 		if (!visited[*i])
// // 			DFS(*i);
// // }

// // // Driver code
// // int main()
// // {
// // 	// Create a graph given in the above diagram
// // 	Graph g;
// // 	g.addEdge(0, 1);
// // 	g.addEdge(0, 2);
// // 	g.addEdge(1, 2);
// // 	g.addEdge(2, 0);
// // 	g.addEdge(2, 3);
// // 	g.addEdge(3, 3);

// // 	cout <<" \n";
// // 	g.DFS(0);
// // 	cout <<" \n";

// // 	return 0;
// // }

// // // improved by Vishnudev C


// #include <bits/stdc++.h>
// #define FA ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// using namespace std;
// int main()
// {
//   FA;
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     long long  n;
//     cin >>n;
//     string s = to_string(n);
//     int x = s.length()-1;
//     long long sum = 0;
//     sum = abs(pow(10,x)-n);
//     cout<<sum<<endl;
//   }
// }

// #include <bits/stdc++.h>
// #define FA ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// using namespace std;
// int main()
// {
//   FA;
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     string s;
//     cin>>s;
//     int days =0;
//     for(int i =0;i<s.length()-2;i=i+3){
//         days++;
//         vector<char>v;
//         v.push_back(s[i]);
//         v.push_back(s[i+1]);
//         v.push_back(s[i+2]);
//         for(int j = 0;j<v.size();j++){
//             if(s[i+4]==v[j]){
//                 i++;
//             }
//         }
//     }
//     cout<<days<<endl;
//   }
// }

// #include <bits/stdc++.h>
// #define FA ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// using namespace std;
// int main()
// {
//   FA;
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int m,n;
//     vector<int>v;
//     for(int i =0;i<m;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     vector<int>tc;
//     for(int i =0;i<n;i++){
//         int x,y;
//         cin>>x>>y;
//         tc.push_back(x);
//         tc.push_back(y);
//     }

//     for(int i=0;i<n;i=i+2){
//         int x = tc[i];
//         int y = tc[i+1];
//         int index,flag=0;
//         for(int j=0;j<m;j++){
//             if(x==v[j]){
//                 index = i;
//                 break;
//             }
//         }
//         for(int j = index +1;j<m;j++){
//             if(y==v[j]){
//                 flag=1;
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
//   }
// }

// #include <bits/stdc++.h>
// #define FA ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// using namespace std;
// int main()
// {
//   FA;
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     string s;
//     cin>>s;
//     int n;
//     cin>>n;
//     sort(s.begin(),s.end());
//     vector<int> v;
//     for(int i =0;i<s.length();i++){
//         v.push_back(s[i]-'0');
//     }
//   }
// }

#include <bits/stdc++.h>
#define FA ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main()
{
  FA;
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin>>s;
    set<char>v;
    for(int i =0;i<s.length();i++){
        v.insert(s[i]);
    }
    int x = v.size()%3;
    cout<<v.size()/3+x<<endl;
  }
}