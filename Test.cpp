#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> nums;
   int input;
   while(cin>>input){
       nums.push_back(input);
   }
    int count=0;
        int z=0;
        int temp;
        int p=0;
        for(int i=0;i<nums.size()-2;i++){
              temp  = abs(nums[i]-nums[i+1]);
              z = 0;
           for(int j=i;j<i+2+z&& j<nums.size()-1;j++){
               p = abs(nums[j] - nums[j+1]);
               if(temp!=p) break;
               if(j>=i+1){
                   z++;
                   count++;
               }
           }
        }
        cout<<count<<endl;
    
    
}