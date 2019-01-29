#include<iostream>
using namespace std;
class stack {
            public :
            stack() { top=0; }
            int push(int value)
            { if (top+1<=maxsize)  {
                                                top++;
                                                V[top]=value;
                                                return 1;}
               return 0;}
            int pop(int *old);
            int whathight() { return top;}
            int isempty() { return (top<1);}
            private :
            int top;
            int V[100];
            int maxsize=100;
         };

int x;
stack somestack;

int main()
{
cout<<"x=";cin>>x;
somestack.push(x);
int direction=1;
int oldval1,oldval2;
while (somestack.whathight()>=1) {
    cout<<endl<<somestack.whathight();
                                                      if (direction==1)
                                                        {somestack.pop(&oldval1);
                                                       somestack.push(oldval1);
                                                       somestack.push(oldval1-1);
                                                       if (oldval1-1==1) direction=0;}
                                                       else {
                                                                somestack.pop(&oldval1);
                                                                if (somestack.pop(&oldval2))
                                                                    {somestack.push(oldval1*oldval2);}
                                                               }
                                                        }
cout<<" Compute = "<<oldval1;
return 0;}

int stack::pop(int *old)
{if  (isempty()) { return 0;}
 *old=V[top];top--;
 return 1;}
