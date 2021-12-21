// https://codeforces.com/problemset/problem/1592/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int weapon, health, h;

    scanf("%d",&test);
    while(test--){
       int counter=0;
       vector<int> h1;
       scanf("%d%d",&weapon,&health);
       for(int i=0;i<weapon;++i){
        scanf("%d",&h);
        h1.push_back(h);
       }
       sort(h1.begin(),h1.end());

       for(int i= weapon-1;;){

         health = health - h1[i];
         if(i==weapon-1){i--;}
         else if(i==weapon-2){i++;}
         counter++;
         if(health<=0){
            printf("%d\n",counter);
            break;
         }
       }
    }
}
