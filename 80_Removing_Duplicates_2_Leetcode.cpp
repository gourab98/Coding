#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int input;

    while(cin>>input){
        nums.push_back(input);
    }

    int i=0;
    for(int n:nums){
        if(i<2 || n>nums[i-2]){
            nums[i++]=n;
        }
    }
    cout<<"Number: "<<i<<endl;

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
