#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "A man, a plan, a canal: Panama";
    stack<int> st;
    queue<int> qu;
    for(int i=0;i<s.size();i++){
        int a = s[i];
        if((65<= a && a <=90) || (97<=a && a<=122) ){
            if(65<= a && a <=90) a=a+32;
            st.push(a);
            qu.push(a);
        } 
    }
    cout<<"The size s "<<s.size() <<endl;
    cout<<"The size st "<<st.size() <<endl;
    cout<<"The size qu "<<qu.size() <<endl;

    for(int i=0;i<st.size();i++){
        cout<<st.top()<<" ";
        cout<<qu.front()<<" "<<endl;
        st.pop();
        qu.pop();
    }


}  