// Take a string as input and remove the last character.
// If the string is empty, return an empty string.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.length()==0)
    {
        cout<<"The String is empty";
    }
    else
    {
        s.pop_back();
        int x = stoi(s);
        cout<<"The String is: "<<x;
    }
    return 0;
}