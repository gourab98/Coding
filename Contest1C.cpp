#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   int a,b,sum;
   cin>>test;
   string all;
   string word;
   while(test--){
    sum=0;
    b=0;
    cin>>all;
    cin>>word;
    for(int i=0;i<word.size();i++){
    for(int j=0;j<all.size();j++){
        if(word[i]==all[j]){
            a=j+1;
            break;
        }
    }
        if(b!=0){
         sum=abs(a-b)+sum;
        }
         b=a;
    }
     cout<<sum<<endl;
   }
}
