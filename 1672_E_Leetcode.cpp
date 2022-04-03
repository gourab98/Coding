class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int ans = 0;
        int sum = 0;
        for(int i=0;i<acc.size();i++){
            sum = 0;
            for(int j=0;j<acc[i].size();j++){
                sum = sum + acc[i][j];
            }
            ans = max(ans,sum);
        }
        
        return ans;
    }
};