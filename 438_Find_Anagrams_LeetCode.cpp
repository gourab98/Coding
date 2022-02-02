//Solution

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> g;
        vector<int> arr(26,0);
        vector<int> temp(26,0);
        
        int slen = s.size();
        int plen = p.size();
        
        if(slen<plen){
            return {};
        }
        
        //First Window:
        for(int i=0;i<plen;i++){
            arr[p[i]-'a']++;
            temp[s[i]-'a']++;
        }
        if(arr==temp){
            g.push_back(0);
        }
        // Rest of the window
        for(int i=plen;i<slen;i++){
            temp[s[i-plen]-'a']--;
            temp[s[i]-'a']++;
            
            if(arr==temp){
                g.push_back(i-plen+1);
            }
        }
        
        return g;
    }
};


// But it got time limit exceeded.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string p;
    string n;
    int pSize;
    int sSize;
    vector <int> g;
    cout<<"Enter the string of S: ";
    cin>>s;
    cout<<"Enter the string of P: ";
    cin>>p;
    pSize=p.size();
    sSize=s.size();
    n = s.substr(1,pSize);
    cout<<n<<endl;
    cout<<sSize<<" "<<pSize<<endl;
     sort(p.begin(),p.end());
        for(int i=0;i<s.size();i++){
            n = s.substr(i, pSize);
            sort(n.begin(),n.end());
            if(n==p){
                g.push_back(i);
            }   
        }
    cout<<g.size()<<endl;
}