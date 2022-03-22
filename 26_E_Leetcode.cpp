class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int j = 0;
        int k = -100000;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==k)
            {
                
            }
            if(nums[i]!=k){
                nums[j]=nums[i];
                j++;
                k = nums[i];
            }
        }
        return j;
    }
};