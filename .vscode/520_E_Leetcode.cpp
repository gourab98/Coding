#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    if (s.size() == 1)
    {
        return true;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            count++;
        }
    }

    if (count == 0 || count == s.size())
    {
        cout<<"True"<<endl;
    }
    else if (count == 1 && isupper(s[0]))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}