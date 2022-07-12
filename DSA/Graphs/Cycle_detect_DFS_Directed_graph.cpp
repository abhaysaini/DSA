#include <bits/stdc++.h>
using namespace std;
bool DFS(int node,vector<int>adj[],int vis[],int visDFS[])
{
    vis[node] = 1;
    visDFS[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(DFS(it,adj,vis,visDFS)){return true;}
        }
        else if(visDFS[it]){
            return true;
        }
    }
    visDFS[node]=0;
    return false;
}
bool checkCycle(vector<int> adj[], int n)
{
    int vis[n];
    int visDFS[n];
    memset(vis, 0, sizeof vis);
    memset(visDFS, 0, sizeof visDFS);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            if (DFS(i,adj,vis,visDFS))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, m;
    cout << "Enter the Vertex and Edge:-" << endl;
    cin>>n>>m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    if (checkCycle(adj, n))
    {
        cout << "Yes the graph contain Cycle!!" << endl;
    }
    else
    {
        cout << "No the graph doesn't contain any Cycle!!" << endl;
    }
}