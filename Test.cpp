#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    vector<vector<int>> mat =  {{1,2,3},{4,5,6},{7,8,9}};
    int m = mat.size();
    reverse(mat.begin(),mat.end());
    for(int x=0;x<mat.size();x++)
    {
       for (int y=0;y<mat[x].size();y++)
       {
           cout<<mat[x][y]<<" ";
       }
       cout<<endl;
    }

}
