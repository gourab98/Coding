class Solution {
public:
    int maxSubArray(vector<int>& vec) {
        
        int maximum = 0;
        int curr =0;
        for(int i=0;i<vec.size();i++){
            curr = curr + vec[i];
            if(curr<0){
                curr = 0;
            }
            maximum = max(maximum,curr);
        }
        if(maximum==0){
            maximum = vec[0];
            for(int i=1;i<vec.size();i++){
                maximum = max(maximum,vec[i]);
            }
        }
        return maximum;
    }
};