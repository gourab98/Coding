#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,apple=0,orange=0;
    int ma[100010];
    int na[100010];
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        cin>>ma[i];
          if((ma[i]+a)>=s && (ma[i]+a)<=t) apple++;
    }
    for(int i=0;i<n;i++){
        cin>>na[i];
         if((na[i] + b)>=s && (na[i]+b)<=t) orange++;
    }
    cout<<apple<<endl;
    cout<<orange<<endl;
    return 0;
}
