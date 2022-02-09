#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1,2,2,1};
    int k;
    int input;

    // while(cin>>input){
    //     nums.push_back(input);
    // }

    cin>>k;

    sort(nums.begin(), nums.end());
    int coun=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            if(abs(nums[i]-nums[j])==k){
                cout<<"("<<nums[i]<<","<<nums[j]<<")"<<endl;
                coun++;
               
            }
        }
    }

    cout<<coun<<endl;
}