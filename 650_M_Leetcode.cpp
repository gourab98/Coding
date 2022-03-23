class Solution {
public:
    int minSteps(int n) {
        int sum = 0;
        if(n==1) {
            
        }
        else
        {
            int i = 2;
            while(n!=1){
                if(n%i==0){
                    n = n / i;
                    sum = sum + i;
                }
                else i++;
            }
        }
        return sum;
    
    }
    
};