// Leetcode problem number: 121
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int number = 0;
    int num;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    int lst = INT_MAX;
    int result=0;
    int comp=0;
    for(int i=0;i<v.size();i++)
    {
       if(v[i]<lst)
       {
           lst=v[i];
       }
       comp=v[i]-lst;
       if(result<comp){
              result=comp;
       }
    }
    cout<<result;
}