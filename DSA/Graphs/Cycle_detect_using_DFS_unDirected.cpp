#include <bits/stdc++.h>
using namespace std;

bool CheckCycleDFS(vector<int> adj[], vector<int> &vis, int node, int parent)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (CheckCycleDFS(adj, vis, it, node))
            {
                return true;
            }
        }
        else if (it != parent)
        {
            return true;
        }
    }
    return false;
}

bool isCyclicDisconnected(vector<int> adj[], int V)
{
    vector<int> vis(V + 1, 0);
    for (int i = 1; i <= V; i++)
    {
        if (!vis[i])
        {
            if (CheckCycleDFS(adj, vis, i, -1))
            {
                return true;
            }
        }
    }
    return false;
}

void addEdge(vector<int> adj[], int x, int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}
int main()
{
    int V = 7;
    vector<int> adj[V];
    addEdge(adj, 1,2);
    addEdge(adj, 2,3);
    addEdge(adj, 3,4);
    addEdge(adj, 4,5);
    addEdge(adj, 5,1);
    addEdge(adj, 3,6);

    if (isCyclicDisconnected(adj, V))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}