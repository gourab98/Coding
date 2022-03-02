class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        int temp=0;
        int con=0;
        while(n>9 || n==1 || n==7){
            sum=n;
            con=0;
            while(sum>0){
                temp= sum%10;
                con=con+ temp*temp;
                sum = sum/10;
                if(sum==0 && con==1){
                    return true;
                }
            }
            n = con;
        }
        return false;
    }
};