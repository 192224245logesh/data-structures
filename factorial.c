#include<stdio.h>
int fact(int n)
{
    if(n==0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    printf("enter any number \n");
    if(scanf("%d ",&n) == 1)
    {
        if( n>=0)
        {
             int result=fact(n);
        printf("the factorial of the given element is %d",result);

        }
        else
        {
            printf("enter positive number \n");
        }
       
    }
    else
    {
        printf("invalid \n");
    }
}