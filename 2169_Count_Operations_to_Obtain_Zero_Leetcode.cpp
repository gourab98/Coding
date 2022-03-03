class Solution {
public:
    int countOperations(int num1, int num2) {
        int n=0;
        int temp =0;
        while(num1>0 && num2>0){
            if(num1>=num2){
                temp= num1- num2;
                num1 = temp;
            }
            else {
                temp = num2 - num1;
                num2 = temp;
            }
            n++;
        }
        return n;
    }
};