#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={-1,-1,1};
    int k=0;
    int number=0;
    int count=0;

    for(int j=0;j<nums.size();j++){
        count=0;
    for(int i=j;i<nums.size();i++){
         //cout<<nums[i]<<" "<<i<<" - "<<count<<endl;
           if(count<=k){
                count = count + nums[i];
                cout<<nums[i]<<" "<<i<<" - ";
                if(count==k){
                    cout<<"GO"<<endl;
                    number++;
                    count=0;
                    break;
                    
                }
           }
    }
    }
    cout<<number<<endl;
    

}