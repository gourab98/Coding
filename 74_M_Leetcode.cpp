class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0;
        int j=0;
        
        int p= max(matrix.size(),matrix[0].size());
        p++;
        while(n>j && i<m)
        {
            if(matrix[i][j] == target)
                return true;
            else if(matrix[i][j]<target && matrix[i][n-1] >= target){
                j++;
            }
            else i++;
        }
        return false;
    }
};