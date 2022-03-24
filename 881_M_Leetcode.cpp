class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        
        sort(p.begin(),p.end());
        
        int count=0;
        
        int j = 0;
        int z = p.size() - 1 ; 
        while(j<=z){
            if(p[j]+p[z]<=l){
                count++;
                j++;
                z--;
            }
            else {
                z--;
                count++;
            }
        }
        return count;
        
        
    }
};