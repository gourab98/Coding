class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int j=0;
        int k=0;
        for(int i = n-2;i>=0;i--){
            if(nums[i]>=nums[i+1])
            {
                k=1;
            }
            else {
                j=i;
                k=0;
                break;
            }    
        }
        
        if(k==1){
            sort(nums.begin(),nums.end());
        }
        else{
            for(int i=n-1;i>=0;i--){
                if(nums[j]<nums[i]){
                    swap(nums[j],nums[i]);
                    break;
                }
            }
            reverse(nums.begin()+j+1,nums.begin()+n);
        }  
    }
};