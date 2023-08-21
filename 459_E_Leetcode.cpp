class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n=s.length();
        for(int i=n/2;i>=1;i--){
            if(n%i==0){
                int time = n/i;
                string str = s.substr(0,i);
                string newStr = "";
                while(time--){
                    newStr+=str;
                }
                
                if(newStr==s) return true;
            }
        }
        return false;
    }
};