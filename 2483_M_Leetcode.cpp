class Solution {
public:
    int bestClosingTime(string customers) {
     int minCost = INT_MAX;
     int minIdx = 0;
     int N = 0;
     int n = customers.size();
        
        vector<int> vec;
        vec.push_back(0);
        int count=0;
        for(int i=0;i<n;i++){
            if(customers[i]=='N') count++;
            vec.push_back(count);
        }

        for(int i=0;i<n;i++){
            int open = vec[i];
            int close = (n-i)-(vec[n]-vec[i]);
            N=open+close;
            
            if(N<minCost){
                minCost = N;
                minIdx = i;
            }
        }
            if(vec[n]<minCost){
                minIdx = n;
            }
        return minIdx;
    }
};