#include <stdio.h>

int myreverse(int num)
{
    int rev=0;
    while(num)
    {
        rev=rev*10+(num%10);
        num/=10;
    }
    return rev;
}

int main()
{
    int num,a;
	scanf("%d",&num);
    a = myreverse(num);
	printf("%d",a);
    return 0;
}
