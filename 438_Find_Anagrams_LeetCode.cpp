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