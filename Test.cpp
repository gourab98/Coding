#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<pair<int,int>> nums;
   vector<int> a;
   cout<<"Enter the number you want to find: ";
   int n;
   cin>>n;
   cout<<"Now please input all your numbers(1-1000):";
   int input;
   while(cin>>input){
       a.push_back(input);
   }
   for(int i=0;i<=1000;i++){
     nums.push_back(make_pair(i,0));
   }

   for(int i=0;i<a.size();i++){
    nums[a[i]] = make_pair(a[i],1);
     //cout<<nums[a[i]].first<<" "<<nums[a[i]].second<<endl;
   }
//    for(int i=0;i<=10;i++){
//      cout<<nums[i].first<<" "<<nums[i].second<<endl;
//    }
    if(nums[n].second==0) cout<<"The number is not presented in the list.";
    else cout<<"The number is presented in the list.";

//   cout<<"The number is "<<n<<": "<<nums[n].second<<endl; 
  
}