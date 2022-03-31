class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        for(int i = nums.size()-1;i>=2;i--){
            if(nums[i]<nums[i-1]+nums[i-2]){
                maxi = nums[i] + nums[i-1] + nums[i-2];
                break;
            }
        }
        return maxi;
    }
};