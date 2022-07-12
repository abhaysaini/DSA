#include <bits/stdc++.h>
using namespace std;

bool bipartite(vector<int> adj[], int color[], int s)
{
    color[s] = 1;
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : adj[node])
        {
            if (color[it] == -1)
            {
                q.push(it);
                color[it] = 1 - color[node];
            }
            else if (color[it] == color[node])
            {
                return false;
            }
        }
    }
    return true;
}

bool checkBFS(vector<int> adj[], int n)
{
    int color[n];
    memset(color, -1, sizeof color);
    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            if (!bipartite(adj, color, i))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    if (checkBFS(adj, n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}