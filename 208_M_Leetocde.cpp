class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLength = INT_MAX;
        int windowSum = 0;
        int i = 0;
        for(int j=0;j<nums.size();j++){
            windowSum +=nums[j];
            while(windowSum>=target){
                minLength = min(minLength, j-i+1);
                windowSum-=nums[i];
                i++;
            }
        }
        return (minLength==INT_MAX)?0:minLength;
    }
};