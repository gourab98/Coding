#include<bits/stdc++.h>
using namespace std;

string add(string a, string b){
    string result="";
    int temp = 0;
    int size_a =a.size()-1;
    int size_b =b.size()-1;
    while(size_a>=0 || size_b>=0 || temp==1){
        temp = temp + ((size_a>=0)? a[size_a]-'0': 0);
        cout<<"Temp+a: "<<temp + ((size_a>=0)? a[size_a]-'0': 0)<<endl;

        temp = temp + ((size_b>=0)? b[size_b]-'0': 0);
        cout<<"Temp+b: "<<temp + ((size_b>=0)? b[size_b]-'0': 0)<<endl;
        result = char(temp%2+'0')+ result;
        temp/=2;
        size_a--;
        size_b--;
    }
    return result;
}

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<"sum of strings are : "<<add(a, b);
    return 0;
}
