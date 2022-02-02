#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string p;
    cin>>s;
    cin>>p;
    vector <int> g;
    int arr[26] = {0};
    int temp[26] = {0};

    int slength = s.length();
    int plength = p.length();
    if(slength < plength)
    {
        cout<<"No anagrams"<<endl;
        return 0;
    }
    //First Window
    for(int i=0;i<plength;i++){
        arr[p[i]-'a']++;
        temp[s[i]-'a']++;
    }
    if(arr==temp)
        g.push_back(0);

    //Rest of the windows
    for(int i=plength;i<slength;i++){
        temp[s[i-plength]-'a']--;
        temp[s[i]-'a']++;

        if(arr==temp)
            g.push_back(i-plength+1);
    }   
    for(int i=0;i<g.size();i++)
        cout<<g[i]<<" ";

}