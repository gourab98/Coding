class Solution {
public:
    int t[21][21];
    int solve(int i, int j, vector<int>& nums){
        if(i>j) return 0;
        if(i==j) return nums[j];
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int take_i = nums[i]+min(solve(i+2,j,nums),solve(i+1,j-1,nums));
        int take_j = nums[j]+min(solve(i+1,j-1,nums), solve(i,j-2,nums));
        return t[i][j]= max(take_i,take_j);
    }
    bool PredictTheWinner(vector<int>& nums) {
        memset(t,-1, sizeof(t));
        int n = nums.size();
        int p1 = solve(0, n-1, nums);
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int p2 = sum - p1;
        
        if(p1>=p2) return true;
        else return false;
    }
};