#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    for(int i=0; i<v.size();++i){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<10;++i){
        cout<<v[i]<<endl;
    }
        cout<<endl;
    for(int i=0;i<10;i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
        vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
}
