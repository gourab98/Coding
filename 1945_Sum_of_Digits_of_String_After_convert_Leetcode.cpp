#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n;
    cin>>a;
    cin>>n;
    string num = "";
    for(int i=0;i<a.size();i++){
        //int p = a[i] - 'a' +1;
        int p =a[i];
         num = num + (char)p;
    }
    int answer=0;
     for(int i=0;i<num.size();i++){
         if(num[i]-96>9){
            int l =num[i]-96;
            answer = answer + l%10;
            l/=10;
            answer = answer + l;
         }
         else {
             answer = answer + (num[i]-96);
         }
    }
    int sum = answer;
    n--;
    while(n--){
       answer = 0;
       while(sum>0)
       {
           answer = answer + sum%10;
           sum/=10;
       }
       sum = answer;
    }

    cout<<answer;

}


class Solution {
public:
    int getLucky(string a, int n) {
    string num = "";
    int ans=0;
    for(int i=0;i<a.size();i++){
        ans = a[i] - 'a' + 1;                // We can also write ans = a[i] - 96   
        num = num + to_string(ans);
    }
    while(n--){
        ans = 0;
        for(int i=0;i<num.size();i++){
            ans = ans + (num[i]-'0');        // We can also write ans = ans + (num[i] - 48) 
        }
        num = to_string(ans);
    }
      return ans;
    }
    
    
};
