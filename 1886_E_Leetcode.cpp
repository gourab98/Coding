// But I have allocate another matrix to store the result.

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int n = mat.size();
        vector<vector<int>> matrix;
        matrix = mat;
    
        if(matrix == target) return true; // 1,2,3,4 
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = mat[n-1-j][i];
            }
        } 
        
         if(matrix == target) return true; // 3,1,4,2
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j] = matrix[n-1-j][i];
            }
        }  
        
        if(mat == target) return true; // 4,3,2,1
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = mat[n-1-j][i];
            }
        }
        if(matrix == target) return true; // 2,4,1,3
        
        return false;
        
    }
};