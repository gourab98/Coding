#include<bits/stdc++.h>
using namespace std;
int main()
{
    int anton=0,danik=0;

    int number;
    string name;
    scanf("%d",&number);
 ///   printf("Name is = %d",number);
    ///scanf("%s",&name);
    cin>>name;
    for(int i=0;i<name.size();i++){
        if(name.at(i)=='A') anton++;
        else danik++;
        //cout<<name<<endl;
    }
    if(anton>danik) printf("Anton");
    else if(danik>anton) printf("Danik");
    else printf("Friendship");

}
