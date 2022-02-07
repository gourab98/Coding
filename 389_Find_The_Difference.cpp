class Solution {
public:
    char findTheDifference(string s, string t) {
    int n=s.length();
    int m=t.length();
    if(n==0) return t[0];
    int i;
        
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for(i=0;i<m;i++){
        if(s[i]!=t[i]){
           break;
        }
    }
        return t[i];
        
    }
};