#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        int n=0,a=0,p=0,l=0,e=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='n') n++;
            if(s[i]=='e') e++;
            if(s[i]=='p') p++;
            if(s[i]=='a') a++;
            if(s[i]=='l') l++;
        }
//        cout<<n<<a<<p<<a<<l<<endl;
        if(n>=1 && e>=1 && p>=1 && a>=1 && l>=1){
            cout<<"Maile Nepal banauna sakchhu!!"<<endl;
        }
        else cout<<"Hami sabai milera Nepal Banau hai!!"<<endl;
    }

}
