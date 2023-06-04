#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[], int size, int u){
    vector<bool> visited(size,false);
    queue<int> q;
    visited[u]= true;
    q.push(u);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout<< x <<" ";
        for(auto v:adj[u]){
            if(visited[v]==false){
                visited[v]= true;
                q.push(v);
            }
        }
    }
}

int main()
{
    
}