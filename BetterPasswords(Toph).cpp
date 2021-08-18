#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(i==0) cout<<(char)toupper(a[i]);
        else if(a[i]=='s') cout<<"$";
        else if(a[i]=='i') cout<<"!";
        else if(a[i]=='o') cout<<"()";
        else cout<<a[i];
    }
    cout<<"."<<endl;

    return 0;
}
