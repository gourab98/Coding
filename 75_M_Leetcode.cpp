class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j=0;
        int temp = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] =  temp;
                j++;
            }
        }
         for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] =  temp;
                j++;
            }
        }
    }
};