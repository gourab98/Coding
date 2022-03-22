class Solution {
public:
    bool isPalindrome(string s) {
        
        stack<int> st;
        queue<int> qu;
        
    for(int i=0;i<s.size();i++){
        int a = s[i];
        if( (48<= a && a<=57) || (65<= a && a <=90) || (97<=a && a<=122) ){
            if(65<= a && a <=90) a=a+32;
            st.push(a);
            qu.push(a);
        } 
    }
      for(int i=0;i<st.size();i++){
        if(st.top()!=qu.front()) return false;
        st.pop();
        qu.pop();
    }
        return true;
        
    }
};