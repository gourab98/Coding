class Solution {
public:
    int maxArea(vector<int>& n) {
        int maxi=0;
        int temp=0;
        int i = 0;
        int j = n.size()-1;
        
        while(i<=j){
            if(n[i]>=n[j]){
                temp = n[j]*(j-i);
                j--;
            }
            else {
                temp = n[i]*(j-i);
                i++;
            }
            maxi = max(temp,maxi);
        }
        return maxi;
    }
};