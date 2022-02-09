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
    unordered_map<int, int> m;
    unordered_map<int, int> n;
    for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            n[nums[i]]=0;
        }

    int coun=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            if(abs(nums[i]-nums[j])==k && m[nums[j]]!=0 && i!=j && n[nums[i]]<2){
                cout<<"("<<nums[i]<<","<<nums[j]<<")"<<endl;
                m[nums[j]]--;
                n[nums[i]]++;
                n[nums[j]]++;
                
                coun++;
               
            }
        }
    }

    cout<<coun<<endl;
}