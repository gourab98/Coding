#include<bits/stdc++.h>
using namespace std;


#define STACK_MAX 100
typedef struct {

    int top;
    int data[STACK_MAX];
}

void push(Stack *s, int item)
{
    if(s-> top <STACK_MAX){
        s->data[s->top]= item;
        s->top = s->top +1;
    }
    else {
        printf("Stack is full!\n");
    }
}
