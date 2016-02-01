#include<stdio.h>
int nextprime(int x)
{
    int i=2;
    while(x%i!=0)
    {i++;}
    if(x==i)
    {
        printf("Next prime is %d",x);
         return 1;
    }
    else
    {
      return 0;
    }
}

int main()
{
    int n, i, j;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(nextprime(i))
        {
            break;
        }
    }
    return 0;
}
