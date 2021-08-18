#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,temp;
    cin>>s;
    cin.ignore();
    string a;
    getline(cin,a);
    for(int i=0;i<a.size();i++){

        if(a[i]!=32){
        a[i]=a[i]-s;
        if(a[i]<97)
        {
            temp=97-a[i];
            a[i]=123-temp;
        }
        }
        cout<<(char)a[i];
    }

    return 0;
}
