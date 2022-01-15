#include<bits/stdc++.h>
using namespace std;

struct user{
    int userID;
    char firstName[25];
    char lastName[25];
    int age;
    float weight;
};


int main()
{
    struct user test, test1, test2;
    test.userID = 01;
    test1.userID = 10;
    test2.userID = 20;

    puts("Enter the first name of UserID: 01");
    gets(test.firstName);
        puts("Enter the first name of UserID: 10");
    gets(test1.firstName);
        puts("Enter the first name of UserID: 20");
    gets(test2.firstName);

      cout<<"User 0 Details: "<<"UserID: "<<test.userID<<" and Name: "<<test.firstName<<endl;
      cout<<"User 1 Details: "<<"UserID: "<<test1.userID<<" and Name: "<<test1.firstName<<endl;
      cout<<"User 2 Details: "<<"UserID: "<<test2.userID<<" and Name: "<<test2.firstName<<endl;
    return 0;
}
