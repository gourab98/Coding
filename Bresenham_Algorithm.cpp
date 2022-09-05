#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cout<<"Please, enter (x1,y1):";
    cin>>x1>>y1;
    cout<<"Please, enter (x2,y2):";
    cin>>x2>>y2;

// Main Bresenham ALGO Start:
    int x = x1;
    int y = y1;
    int dx = x2-x1;
    int dy = y2-y1;
    int p = 2*dy- dx;
    while(x<=x2){
        cout<<"("<<(int)x<<","<<(int)y<<")"<<endl;
        x++;
        if(p<0) p = p + 2*dy;
        else {
            p = p + 2*dy - 2*dx;
            y++;
        }
    } 

    return 0;
}