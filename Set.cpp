#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> Set;
    set<int>::iterator it;
    int ele;
    for(int i=0;i<10;i++){
        cin>>ele;
        Set.insert(ele);
    }
    for (it = Set.begin(); it!= Set.end(); ++it)
    cout << *it << " ";

}
