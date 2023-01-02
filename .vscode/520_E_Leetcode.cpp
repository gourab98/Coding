#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1,s2,s3;
    s1 = s;
    s2 = s;
    s3 = s;
    transform(s1.begin(),s1.end(), s1.begin(),:: toupper);
    transform(s2.begin(),s2.end(), s2.begin(),:: tolower);
    transform(s3.begin(),s3.end(), s3.begin(),:: tolower);
    s3[0]= s3[0] - 32;
    
    if( s==s1 || s==s2 || s==s3){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}