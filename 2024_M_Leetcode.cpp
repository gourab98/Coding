class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int i=0;
        int count = 0;
        int ans = 0;
        for(int j=0;j<answerKey.size();j++){
            if(answerKey[j]=='T'){
                count++;
            }
            while(count>k){
                if(answerKey[i]=='T'){
                    count--;
                }
                i++;
            }
            ans = max(ans, j-i+1);
        }
        i = 0;
        count = 0;
        for(int j=0;j<answerKey.size();j++){
            if(answerKey[j]=='F'){
                count++;
            }
            while(count>k){
                if(answerKey[i]=='F'){
                    count--;
                }
                i++;
            }
            ans = max(ans, j-i+1);
        }
        return ans;

    }
};