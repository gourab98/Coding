#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    //int zero=0, five=0;
    string a;
    cin>>test;
    while(test--){
     cin>>a;
     int zero=0,z=0, five=0,f=0;
     for(int i=a.size()-1;i>=0;i--)
     {
         if(a[i]=='0')
         {
           if(zero==1)
           {
               zero=2;
               z=i;
           }
           if(zero==0){
           zero=1;
           }
         }
         if(a[i]=='5'){
            five=1;
            if(zero==1 && zero!=2){
                zero=2;
                z=i;
            }
         }
         if(a[i]=='2' || a[i]=='7' && five==1 && five!=2){
            five=2;
            f=i;
         }
     }
     cout<<z<<" Zero "<<zero<<endl;
     cout<<f<<" Five "<<five<<endl;

    }
}
