class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        int temp=0;
        while(n){
            temp = n%2;
            if(temp==1){
                count++;
            }
            n=n/2;
        }
        return count;
    }
};