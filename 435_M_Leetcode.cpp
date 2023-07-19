class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(begin(intervals),end(intervals));
        int n = intervals.size();
        int count = 0;
        int i=0, j=1;
        while(j<n){
            vector<int> curr_interval = intervals[i];
            vector<int> next_interval = intervals[j];
            
            int cs = curr_interval[0];
            int ce = curr_interval[1];
            
            int ns = next_interval[0];
            int ne = next_interval[1];
            
            if(ce<=ns){
                i=j;
                j++;
            }
            else if(ce<=ne){
                j++;
                count++;
            }
            else if(ce >ne){
                i=j;
                j++;
                count++;
            }
        }
        return count;
    }
};