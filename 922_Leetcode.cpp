class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
          vector<int> odd;
        vector<int> even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else odd.push_back(nums[i]);
        }
        int j=0, k=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=even[j];
                j++;
            }
            else {
                nums[i]= odd[k];
                k++;
            }
        }
        return nums;
    }
};