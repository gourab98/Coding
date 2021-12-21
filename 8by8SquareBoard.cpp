#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,cloumn;
    for(int i=0; i<=63; ++i)
    {
        row= i/8;
        cloumn = i%8;
        if(cloumn==0)
        {
            cout<<"\nStart: ";
        }
        cout<<cloumn<<" "<<row;

    }
}
