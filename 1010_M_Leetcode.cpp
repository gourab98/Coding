#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    vector<int> time = {60,60,60, 120};
         int count = 0 ;
        vector<int>v(60,0);
        for(int i=0;i<time.size();i++){
            int a= time[i]%60;
            if(a==0)
                count = count + v[0];
            else count = count + v[60-a];
            
            v[a]++;

    cout << count << endl;
}
