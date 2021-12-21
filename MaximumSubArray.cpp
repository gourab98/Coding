#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maximunSubArraySum = INT_MIN;

    vector<int> vec;
    vector<int>:: iterator it;
    for(int i=1;i<=15;i++){
        if(i%2==0){
            vec.push_back(-i);
        }
        else vec.push_back(i);
    }
    for(int start=0;start<vec.size();start++){
            int runningWindowSum =0;
        for(int ending=start;ending<vec.size();ending++){
                cout<<vec[ending]<<" ";
            runningWindowSum = runningWindowSum + vec[ending];
            maximunSubArraySum = max(maximunSubArraySum,runningWindowSum);
        }
        cout<<endl;
    }
    cout<<maximunSubArraySum<<endl;

}
