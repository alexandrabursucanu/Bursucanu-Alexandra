#include<iostream>
using namespace std;
typedef struct {int content[100];
                int top;} stiva;
stiva S;

int push(stiva *S,int valoare)
{if (S->top<100)    {S->top++;
                    S->content[S->top]=valoare;
                    return 1;}
return 0;}

int pop(stiva *S,int *fost)
{if (S->top>=1) {*fost=S->content[S->top];
                 S->top--;
                return 1;}
return 0;}

int main()
{int m,n;
cout<<"m=";cin>>m;
cout<<"n=";cin>>n;
push(&S,m);
while (S.top>=1)
{m=S.top;
pop(&S,&m);
if(m==0)
n++;
else
if(n==0)
{n=1;
push(&S,m-1);}
else
{n--;
push(&S,m-1);
push(&S,m);}}
cout<<n;}
