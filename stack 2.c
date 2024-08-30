# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define MAX 100
int stack[MAX];
int top = -1;

void push(int stack[],int x)
{
    if(top == MAX-1)
    {
        printf("Stack Overflow\n");
    }
    else
        stack[++top] = x;
}

int pop(int stack[])
{
    if(top == -1)
    {
        printf("Stack underflow\n");
        return 0;
    }
        
    else
        return stack[top--];    
}

int isOperand(char ch)
{
    if(ch == '+' || ch=='-' ||ch=='*' ||ch=='/' || ch=='^')
        return 0;
    else
        return 1;    
}

int Evalpostfix(int stack[], char exp[])
{
    int i = 0; 
    while(exp[i] != '\0')
    {
        if(isOperand(exp[i]))
            push(stack, exp[i] -'0');
        else if(isOperand(exp[i]) == 0)
        {
            int x2 = pop(stack);
            int x1 = pop(stack);

            switch(exp[i])
            {
                case '+' : push(stack, x1 + x2);
                           break;

                case '-' : push(stack, x1 - x2);
                           break;

                case '*' : push(stack, x1 * x2);
                           break;

                case '/' : push(stack, x1 / x2);
                           break;

                case '^' : push(stack, pow(x1,x2));
                           break;
            }
        }  
        i++;  
    }
    return pop(stack);
}

int main()
{
    char postfix[] ="35*62/+4-";
    printf("\n");
    int r = Evalpostfix(stack, postfix);
    printf("%d\n",r);
}
