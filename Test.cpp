#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> mp;
    int arr[2]={1,2};
    int arr1[2]={-2,-1};
    int arr2[2]={-1,2};
    int arr3[2]={0,2};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            int sum = arr[i]+arr1[j];
            mp[sum]++;
            //cout<<mp[sum]++<<endl; 
        }
    }
        cout<<" GO"<<endl;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            int sum =(-1)*(arr2[i]+arr3[j]);
            cout<<mp[sum]<<endl;
        }
    }
    cout<<" GO"<<endl;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
}