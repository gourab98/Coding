#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={3,1,4,1,5};
    int k;
    int input;

    // while(cin>>input){
    //     nums.push_back(input);
    // }

    cin>>k;

    sort(nums.begin(), nums.end());

    int coun=0;
    for(int i=1;i<nums.size();i++){
        cout<<"("<<nums[i-1]<<","<<nums[i]<<")"<<endl;
        if(abs(nums[i-1]-nums[i])==k){
            
            coun++;
        }
    }

    cout<<coun<<endl;
}