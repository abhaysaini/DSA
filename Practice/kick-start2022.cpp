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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(),::toupper);
    int count =0;
    for(int i =0;i<s.length()/2;i++){
        if(s[i]==s[s.length()-i-1]){
            count++;
        }
    }
    cout<<m-count<<endl;
  }
}