class Solution {
        
public:
    int rob(vector<int>& nums) {
        int rob1 = 0;
        int rob2 = 0;
        int temp = 0;
        for(int i=0;i<nums.size();i++){
            temp = max(rob1+nums[i], rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        return rob2;
    }
};