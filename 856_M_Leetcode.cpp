class Solution {
public:
    int scoreOfParentheses(string s) {
        stack <int> st;
        int cou=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(cou);
                cou = 0; 
            }
            else {
                cou = st.top() + max(cou*2,1);
                st.pop();
            }
        }
        return cou;
    
    }
};