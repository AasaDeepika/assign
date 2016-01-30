#include<stdio.h>
int fib(int x);
int main()
{
	int num;
	scanf("%d",&num);
	printf("o/p: ");
	fib(num);
	return 0;	
}
int fib(int a)
{
	int i,n1=0,n2=1,sum=0;
	for(i=0;i<a;i++)
	{
		sum=n1+n2;
		n1=n2;
		n2=sum;
		if(sum<a)
		{
			continue;
		}
		else if(sum==a)
		{
			printf("%d",a);	
			return ;
		}
		else
		{
			printf("%d\t",n1);
			fib(a-n1);
			return ;
		}
	}
}
