#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n;
    cin>>a;
    cin>>n;
    string num = "";
    int ans=0;
    for(int i=0;i<a.size();i++){
        ans = a[i] - 96;
        num = num + to_string(ans);
    }
    while(n--){
        ans = 0;
        for(int i=0;i<num.size();i++){
            ans = ans + (num[i]-48);
        }
        num = to_string(ans);
    }
    cout<<ans;


}