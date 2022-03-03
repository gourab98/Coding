class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count=0;
        int ind=0;
        int diff=0;
        if(nums.size()<=2) return count;
        
        int prev_diff= nums[1]- nums[0];
        
        for(int i=1;i<nums.size()-1;i++){
               diff = nums[i+1]-nums[i];
            if(diff== prev_diff) ind++;
            else {
                prev_diff = diff;
                ind=0;
            }
            count = count + ind;
        }
        return count;
    }
};

// Different Approach
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count=0;
        int z=0;
        int temp=0;
        int p=0;
        if(nums.size()<=2) return count;
        for(int i=0;i<nums.size()-2;i++){
              temp  = nums[i+1]-nums[i];
              z = 0;
           for(int j=i+2;j<nums.size();j++){
               p = nums[j] - nums[j-1];
               if(temp!=p) break;
               else count++;
           }
        }
        return count;
    }
};