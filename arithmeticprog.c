#include<stdio.h>
int main()
{
	int s,d,n,i,a;
	char type[2];
	printf("N:");
	scanf("%d",&n);
	printf("\nS:");
	scanf("%d",&s);
	printf("\nD:");
	scanf("%d",&d);
	printf("\nTYPE:");
	scanf("%s",type);
	if(type=="AP")
	{
		a=1;
	}
	else a=2;
	switch(a)
	{
		case 1:
							for(i=1;i<=n;i++)
					{
						printf("%d,",s);
						s+=d;
					}
					break;
		case 2:
					for(i=1;i<=n;i++)
					{
						printf("%d,",s);
						s=s*d;
					}
					break;
		default : printf("enter correct option");
					break;
					
	}
	return 0;
}
