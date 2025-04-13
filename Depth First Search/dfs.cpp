#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited)
{
    //
}

int main(int argc, char const *argv[])
{

    int nodes = 6;
    int edges = 7;

    vector<vector<int>> adj(nodes);
    srand(time(0));

    int edgeCount = 0;
    while (edgeCount < edges)
    {
        int u = rand() % nodes;
        int v = rand() % nodes;

        if (u != v && find(adj[u].begin(), adj[u].end(), v) == adj[u].end())
        {
            adj[u].push_back(v);
            adj[v].push_back(u); // Undirected graph
            edgeCount++;
        }
    }

    // Print the adjacency list
    cout << "Generated Random Graph:" << endl;
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " -> ";
        for (int neighbor : adj[i])
        {
            cout << neighbor << " ";
        }
        cout << endl;
    }
    int value = rand() % nodes;
    vector<bool> visited(nodes, false);

    dfs(0, adj, visited);
    return 0;
}
