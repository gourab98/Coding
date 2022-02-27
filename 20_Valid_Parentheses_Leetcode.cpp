#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    stack<int> stac;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            stac.push(s[i]);
        }
        else if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(stac.empty()){
                return false;
            }
            else if(s[i]==')' && stac.top()=='('){
                stac.pop();
            }
            else if(s[i]=='}' && stac.top()=='{'){
                stac.pop();
            }
            else if(s[i]==']' && stac.top()=='['){
                stac.pop();
            }
            else return false;
        }

    }
    if(stac.empty()){
        return true;
    }
    else{
        return false;
    }
}