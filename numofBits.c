#include <stdio.h>

int main()
{
    int n2,n1=0,count=0,x=1;
    printf("Enter number : ");
    scanf("%d",&n1);
    n2=n1;
    while(x)
    {
        x=n2/2;
        n2=x;
        count++;
    }
    printf("\nno of bits for %d : %d",n1,count);
    return 0;
}
