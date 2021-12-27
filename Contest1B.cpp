#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test,all,total;
   int a,b, ans;
   cin>>test;
   while(test--){
     cin>>all;
     cin>>total;
     a=ceil(all/2.0);
     b=(all-a)+1;
     ans=floor(total/b);
     cout<<ans<<endl;
   }

}
