class Solution
{
    void BFS(vector<int> adj[], int v, vector<bool> &visited)
    {
        queue<int> q;
        visited[v] = true;
        q.push(v);
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (auto x : adj[u])
            {
                if (visited[x] == false)
                {
                    visited[x] = true;
                    q.push(x);
                }
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();
        vector<int> adj[n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (isConnected[i][j] == 1)
                {
                    adj[i].push_back(j);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> ";
            for (auto j : adj[i])
            {
                cout << j << " ";
            }
            cout << endl;
        }
        vector<bool> visited(n, false);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == false)
            {
                count++;
                BFS(adj, i, visited);
            }
        }
        return count;
    }
};