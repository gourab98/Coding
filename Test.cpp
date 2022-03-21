#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    vector<int> ans;
    int input;
    while(cin>>input){
          vec.push_back(input);
    }   
    for(int i=0;i<vec.size();i++){
        if(i%2==0){
            ans.push_back(vec[i]);
        }
    }
    for(int i=0;i<vec.size();i++){
        if(i%2==1){
            ans.push_back(vec[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
  
}  