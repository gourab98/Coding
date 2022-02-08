#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
     int ans=0;
     while(num>0){
         ans = ans + num%10;
         num /= 10;
         
         if(num==0 && ans>9){
             num = ans;
             ans = 0;
         }
     }
     cout<<ans<<endl;
       
}