#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x1, y1, x2, y2;
    cout<<"Please, enter (x1,y1):";
    cin>>x1>>y1;
    cout<<"Please, enter (x2,y2):";
    cin>>x2>>y2;

// Main DDA ALGO Start:

    float dx = x2 - x1;
    float dy = y2 - y1;

    int step; 
    if(abs(dx)>abs(dy)) step = abs(dx);
    else step = abs(dy);

    float xinc = dx / step;
    float yinc = dy / step;

    for(int i=0;i<=step;i++){
        cout<<"("<<(int)x1<<","<<(int)y1<<")"<<endl;
        x1 = x1 + xinc;
        y1 = y1 + yinc;
    }  
    return 0;
}