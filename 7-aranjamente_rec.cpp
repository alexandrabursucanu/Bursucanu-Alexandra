#include<iostream>
using namespace std;
struct stiva{int top;
            int content[1000];};
int n,k;
stiva S;

int tipar(stiva *S)
{cout<<endl;
for(int i=1;i<=k;i++) cout<<S->content[i]<<" ";}

int succesor(stiva *S)
{if (S->content[S->top]<n)
        {S->content[S->top]++;
          return 1;}
return 0;}

int valid(stiva *S)
{if (S->top>1) for(int i=1;i<=S->top-1;i++)
            if (S->content[i]==S->content[S->top]) return 0;
return 1;}

int init(stiva *S)
{S->content[S->top]=0;}

int solutie(stiva *S)
{return S->top-1==k;}

int BKTR_REC(stiva *S)
{if(solutie(S)) tipar(S);
            else
            while(succesor(S))
            {if (valid(S)){S->top++;
                        init(S);
                        BKTR_REC(S);
                        S->top--;}}}

int main()
{cout<<"n=";cin>>n;
cout<<"k=";cin>>k;
S.top=1;
BKTR_REC(&S);
return 0;}
