class Solution {
public:
    int mm;
    int nn;
    int t[101][101];
    int solve(int i, int j){
        if(i>mm || j>nn){
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        if(i==mm && j==nn){
            return 1;
        }     
        int takeI = solve(i+1,j);
        int takeJ = solve(i,j+1);
        return t[i][j]=takeI+takeJ;
    }
    int uniquePaths(int m, int n) {
        mm = m-1;
        nn = n-1;
        memset(t,-1,sizeof(t));
        return solve(0,0);
    }
};