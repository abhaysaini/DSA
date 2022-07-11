// C++ program to detect cycle
// in an undirected graph
// using BFS.
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool isCyclicConntected(vector<int> adj[], int s, int V, vector<bool> &visited)
{

    // Create a queue for BFS
    queue<pair<int,int>> q;

    // Mark the current node as
    // visited and enqueue it
    visited[s] = true;
    q.push({s,-1});

    while (!q.empty())
    {

        // Dequeue a vertex from queue and print it
        int u = q.front().first;
        int v = q.front().second;
        q.pop();

        // Get all adjacent vertices of the dequeued
        // vertex u. If a adjacent has not been visited,
        // then mark it visited and enqueue it. We also
        // mark parent so that parent is not considered
        // for cycle.
        for (auto it : adj[u])
        {
            if (!visited[it])
            {
                visited[it] = true;
                q.push({it,u});
            }
            else if (v != it)
                return true;
        }
    }
    return false;
}

bool isCyclicDisconntected(vector<int> adj[], int V)
{
    // Mark all the vertices as not visited
    vector<bool> visited(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
            if (isCyclicConntected(adj, i, V, visited))
            {
                return true;
            }
    }
    return false;
}

// Driver program to test methods of graph class
int main()
{
    int V = 13;
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 5, 6);
    addEdge(adj, 5, 10);
    addEdge(adj, 6, 7);
    addEdge(adj, 10, 9);
    addEdge(adj, 7, 8);
    addEdge(adj, 9, 8);
    addEdge(adj, 8, 11);

    if (isCyclicDisconntected(adj, V))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
