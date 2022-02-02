// Tree traversal in BFS in C++

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int root = arr[0];
    queue<int> q;
    q.push(root);
    while(!q.empty())
    {
        int temp = q.front();
        cout<<temp<<" ";
        q.pop();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==temp)
            {
                q.push(arr[i]);
            }
        }
    }
    
}