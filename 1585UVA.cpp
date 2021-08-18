#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,p=1,cou=0;
    cin>>x;
    string a;
    for(int i=0;i<x;i++){
        cin>>a;
        p=1;
        cou=0;
        for(int j=0;j<a.size();j++){
            if(a[j]=='O'){
                cou=cou+p;
                p++;
            }
            else p=1;
        }
        cout<<cou<<endl;
    }

    return 0;
}
