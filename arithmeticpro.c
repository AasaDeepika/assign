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
	if(strcmp(type,"AP")==0)
	{
		a=1;
	}
	else if(strcmp(type,"GP")==0)
	{
	    a=2;
	
	}
	else {
			printf("Enter correct type...");
			return 0;
	}
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
	}
	return 0;
}
