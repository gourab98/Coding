class Solution {
public:
    int brokenCalc(int a, int b) {
        
        int ans = 0;
        while(a<b){
            if(b%2==0){
                b = b/2;
            }
            else b = b+1;
            
            ans++;
        }
        return ans +  a - b ;
    }
};