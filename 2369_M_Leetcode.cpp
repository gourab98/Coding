class Solution {
public:
    int n;
    int t[100001];
    bool solve(int i, vector<int>& nums){
        if(i>=n) return true;
        bool result = false;
        
        if(t[i]!=-1){return t[i];}
        
        // RULE-1
        if(i+1<n && nums[i]==nums[i+1]){
            result = solve(i+2,nums);
        }
        if(result == true) return true;
        // RULE-2
        if(i+2 <n && nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
            result = solve(i+3,nums);
        }
        if(result == true) return true;
        //RULE-3
        if(i+2<n && nums[i]+1==nums[i+1] && nums[i+1]+1==nums[i+2]){
            result = solve(i+3,nums);
        }
        
        return t[i]=result;
    }
    bool validPartition(vector<int>& nums) {
        n=nums.size();
        memset(t,-1,sizeof(t));
        return solve(0,nums);
    }
};