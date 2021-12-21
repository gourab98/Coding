#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin>>number;
    while(number--){
        string line;
        int a=0,b=0,c=0;
        cin>>line;
        for(int i=0;i<line.size();i++){
            if(line[i]=='A') a++;
            else if(line[i]=='B') b++;
            else if(line[i]=='C') c++;
        }
        if(a+c==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
