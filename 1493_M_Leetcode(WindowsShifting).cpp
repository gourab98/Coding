class Solution {
public:
    int n;
    int longestSubarray(vector<int>& nums) {
    n = nums.size();
    int result = 0;
    int countZero =0;
    int i=0;
    for(int j=0;j<n;j++){
        if(nums[j]==0){
            countZero++;
        }
        while(countZero>1){
            if(nums[i]==0){
                countZero--;
            }
            i++;
        }
        result = max(result, j-i);
    }
    return result;
    }
};