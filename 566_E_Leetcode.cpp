class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
     
        int n = mat.size();
        int m = mat.size();
        
        vector<vector<int>> ans(r, vector<int>(c));
        
        if(m*n != r*c){
            return mat;
        }
        
        int p=0;
        int q=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(q==c){
                    p++;
                    q=0;
                }
                ans[p][q++]= mat[i][j];
            }
        }
        
        return ans;
    }
};