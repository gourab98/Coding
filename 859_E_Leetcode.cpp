class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size() || s.size()==1) return false;
        int a = 0;
        for(int i=0;i<goal.size();i++){
            if(s[i]!=goal[i]){
                a=i;
                break;
            }
        }
        if(s==goal){
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                a=i+1;
                break;
            }
        }
        }
            for(int j=0;j<s.size();j++){
                if(a!=j){
                    swap(s[a],s[j]);
                    if(s==goal) return true;
                    swap(s[j],s[a]);
                }
            }
        return false;
    }
};