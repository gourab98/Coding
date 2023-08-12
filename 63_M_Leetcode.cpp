class Solution {
public:
    int m;
    int n;
    int t[101][101];
    int solve(int i, int j,vector<vector<int>>& obstacleGrid){
        
        if(i>m || i<0 || j>n || j<0 || obstacleGrid[i][j]==1){
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        
        if(i==m && j==n){
            return 1;
        }
        
        int takeI = solve(i+1,j,obstacleGrid);
        int takeJ = solve(i,j+1,obstacleGrid);
        return t[i][j]=takeI+takeJ;
        
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        m = obstacleGrid.size()-1;
        n = obstacleGrid[0].size()-1;
        memset(t,-1,sizeof(t));
        return solve(0,0,obstacleGrid);
    
    }
};