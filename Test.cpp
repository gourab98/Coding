#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p;
   queue<int> qu;
   for(int i=0;i<5;i++){
       cin>>p;
       qu.push(p);
   }
   cout<<qu.front()<<" ";

   cout<<qu.back()<<" ";

   qu.pop();
   qu.pop();
   cout<<"The size "<<qu.size()<<endl;
    for(int i=0;i<5;i++){
       cout<<" "<<qu.front()<<" ";
   }

    
}  


