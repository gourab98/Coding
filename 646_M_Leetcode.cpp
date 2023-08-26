class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        auto lambda = [&](vector<int> &vec1, vector<int> &vec2){
            return vec1[1]<vec2[1];
        };
        sort(begin(pairs),end(pairs),lambda);
        int result=1;
        
        int j=0;
        for(int i=0;i<pairs.size()-1;i++){
            if(pairs[j][1]<pairs[i+1][0]){
                j=i+1;
                result++;
            }
        }
        return result;
    }
};