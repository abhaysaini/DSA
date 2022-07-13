#include <bits/stdc++.h>
using namespace std;

vector<int> topoSortK(vector<int> adj[], int n)
{
    queue<int> q;
    vector<int> inDg(n, 0);

// finding indegree of node
    for(int i =0;i<n;i++){
        for(auto it: adj[i]){
            inDg[it]++;
        }
    }

    for (int i = 0; i <n;i++)
    {   
        if(inDg[i]==0){
            q.push(i);
        }
    }
    vector<int> topo;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for(auto it:adj[node]){
            inDg[it]--;
            if(inDg[it]==0){
                q.push(it);
            }
        }
    }
    return topo;
}

int main()
{
    int n,m;
    cout<<"Enter the number of Node :-"<<endl;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i =0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    vector<int> v = topoSortK(adj,n);
    for(auto it: v){
        cout<<it<<" ";
    }
    return 0;
}