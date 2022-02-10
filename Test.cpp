#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1,1,1,2,2};
    int k;
    int input;

    // while(cin>>input){
    //     nums.push_back(input);
    // }
 
    cin>>k;
    sort(nums.begin(), nums.end());
    map<pair<int,int>,int> mp;
    int count = 0;

    for(int i=0;i<nums.size();i++){
        for(int j=i+1;k<nums.size();j++){
            if(abs(nums[i]-nums[j])==k){
                pair<int,int> p ={nums[i],nums[j]};
                if(mp.find(p)==mp.end()){
                    count++;
                    cout<<nums[i]<<" "<<nums[j]<<endl;
                    mp[p]=1;
                }
            }
        }
    }
    
    cout<<count<<endl;
}