class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int lastZero = -1;
        int result = 0;
        while(j<nums.size()){
            if(nums[j]==0){
                i = lastZero+1;
                lastZero = j;
            }
            result = max(result,j-i);
            j++;
        }
        return result;
    }
};