#include<bits/stdc++.h>
using namespace std;
int main()
{
    int totalroom=0;
    int total;
    int person, accomodate;
    scanf("%d",&total);
    for(int room=1;room<=total;room++){
        scanf("%d%d",&person,&accomodate);
        if(accomodate>(person+1)){
            totalroom++;
        }
    }
    cout<<totalroom<<endl;

}
