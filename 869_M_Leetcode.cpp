#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
    bool reorderedPowerOf2(int N) {
        string N_str = sorted_num(N);
        for (int i = 0; i < 30; i++)
            if (N_str == sorted_num (1 << i)) return true;
        return false;
    }
    
    string sorted_num (int n) {
        string res = to_string(n);
        sort(res.begin(), res.end());
        return res;
    }
        

}