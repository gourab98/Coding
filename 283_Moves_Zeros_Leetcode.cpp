#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int input;
    while(cin>>input)
    {
        nums.push_back(input);
    }
    int j=0;
    for(int i=0;i<nums.size();i++){
         if(nums[i]!=0){
             swap(nums[j],nums[i]);
                j++;
         }
    }

    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }

    
}