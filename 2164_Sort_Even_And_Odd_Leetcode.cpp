#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> nums;
   int input;
   while(cin>>input){
       nums.push_back(input);
   }

    vector<int> odd;
    vector<int> even;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
//        for(int i=0;i<even.size();i++){
//        cout<<even[i]<<" ";
//    }
//       for(int i=0;i<odd.size();i++){
//        cout<<odd[i]<<" ";
//    }

        int j=0, k=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=even[j];
                j++;
            }
            else {
                nums[i]= odd[k];
                k++;
            }
        }
   for(int i=0;i<nums.size();i++){
       cout<<nums[i]<<" ";
   }
}