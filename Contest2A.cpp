#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    long long int a,b,c, big;
    cin>>test;
    while(test--){
        cin>>a;
        cin>>b;
        cin>>c;
        big=max(a,max(b,c));

        if(big-a==0 && (big!=b && big!=c))
            cout<<"0"<<" ";
        else cout<<big-a+1<<" ";

        if(big-b==0 && ( big!=c && big!=a))
            cout<<"0"<<" ";
        else cout<<big-b+1<<" ";

        if(big-c==0 && (big!=b &&big!=a))
            cout<<"0"<<endl;
        else cout<<big-c+1<<endl;

    }
}
