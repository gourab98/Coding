#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);

        vector<vector<int>> mat = {{3,3,1,1},{2,2,1,2},{1,1,1,2}};
        int m = mat.size();
        int n = mat[0].size();
        
        vector<int> val;
        
        for(int r=0;r<m;r++){
            val.clear();
            for(int i=r, j=0; i<m && j<n;i++,j++){
                val.push_back(mat[i][j]);
            }
            sort(val.begin(),val.end());
            for(int i=r, j=0; i<m && j<n;i++,j++){
                mat[i][j] = val[j];
            }
        }
        
        for(int c =1;c<n;c++){
            val.clear();
            for(int i=0,j=c; i<m && j<n;i++,j++){
                val.push_back(mat[i][j]);
            }
            sort(val.begin(),val.end());
            for(int i=0,j=c;i<m && j<n;i++,j++){
                mat[i][j] = val[i];
            }
        }

        for(int x=0;x<mat.size();x++)
        {
           for (int y=0;y<mat[x].size();y++)
           {
               cout<<mat[x][y]<<" ";
           }
           cout<<endl;
        }


}
