// (23*4+)
#include <stdio.h>
int sum();
int mul();
int sub();
int divide();
int power();
int stack[20];
int top=-1;
void main() {
char st[10];
int i;
printf("Enter the Expresion:");
scanf("%s",st);
for(i=0;st[i]!='\0';i++)
    {
        if(st[i]!=' ')
            {
                switch(st[i])
                {
                    case '+': sum();
                            break;
                    case '-': sub();
                            break;
                    case '*': mul();
                            break;
                    case '/': divide();
                            break;
                    case '^': power();
                            break;
                    default: top++;
                            stack[top]=st[i]-48;
            }
        
        }
    
    }
printf("Result : %d",stack[top]);
}
int sum()
{
    int result,a,b;
    a=stack[top];
    top--;
    b=stack[top];
    top--;
    result=a+b;
    top++;
    stack[top]=result;
}
int mul()
{
    int result,a,b;
    a=stack[top];
    top--;
    b=stack[top];
    top--;
    result=a*b;
    top++;
    stack[top]=result;
}
int sub()
{
    int result,a,b;
    a=stack[top];
    top--;
    b=stack[top];
    top--;
    result=a-b;
    top++;
    stack[top]=result;
}
int divide()
{
    int result,a,b;
    a=stack[top];
    top--;
    b=stack[top];
    top--;
    result=a/b;
    top++;
    stack[top]=result;
}
int power()
{
    int result,a,b;
    a=stack[top];
    top--;
    b=stack[top];
    top--;
    result=a^b;
    top++;
    stack[top]=result;
}