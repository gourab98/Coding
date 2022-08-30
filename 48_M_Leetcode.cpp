// But I have allocate another matrix to store the result.

class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        
        int n = mat.size();
        vector<vector<int>> matrix;
        matrix = mat;
            
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = mat[n-1-j][i];
                // swap(matrix[i][j],matrix[n-1-j][i]);
                
            }
        }
        mat = matrix;
        
    }
};