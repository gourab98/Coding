class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int answer = 0;
        long long sum = 0;
        for(int i=0;i<gain.size();i++){
            sum +=gain[i];
            if(sum>answer){
                answer = sum;
            }
        }
        return answer;
    }
};