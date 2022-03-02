#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s,t;
        cin>>s;
        cin>>t;
        int j = 0 ;
        for(int i=0;i<t.size();i++){
            if(s[j]==t[i]){
                j++;
            }
        }
        if(j==s.size()) return true;
        else return false;
}