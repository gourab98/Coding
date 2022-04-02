class Solution {
public:
    bool validPalindrome(string s) {
        int j=s.size()-1;
        int i=0;
        for(i=0;i<s.size();i++,j--){
           if(s[i]!=s[j]){
               break;
           }
            }
        vector<int> vec1;
        vector<int> vec2;
        for(int k=0;k<s.size();k++){
            if(k!=i){
            vec1.push_back(s[k]);
            vec2.push_back(s[k]);    
            }
}
        reverse(vec1.begin(),vec1.end());
        if(vec1==vec2) return true;
        
               vec1.clear();
       vec2.clear();
        
        for(int k=0;k<s.size();k++){
            if(k!=j){
            vec1.push_back(s[k]);
            vec2.push_back(s[k]);    
            }
}
        reverse(vec1.begin(),vec1.end());
        if(vec1==vec2) return true;

        return false;
     
    }
};