#include <stdio.h>
#include<string.h>
int main(void) {
	int count[5]={0},top,pos,i,a=1,v;
	char name[5][10];
	printf("enter the names of the parties:");
	for(i=0;i<4;i++)
	{
		scanf("%s",name[i]);
	}
	strcpy(name[4],"dummy");
	do
	{
		for(i=0;i<5;i++)
		{
			printf("%d.%s",(i+1),name[i]);
		}
		printf("\nEnter your vote");
		scanf("%d",&v);
		if(v<5)
		{
			count[v]++;
		}
		else
			count[4]++;
		printf("\ndo you want to continue?");
		scanf("%d",&a);
	}while(a==1);
	top=count[0];
	for(i=1;i<5;i++)
	{
		if(top<count[i])
		{
			top=count[i];
			pos=i;
		}
	}
	printf("\nPARTY\tVOTES");
	for(i=0;i<5;i++)
	{
		printf("\n%s\t%d",name[i],count[i]);
	}
	printf("\nwinner of elections is %s with %d votes",name[pos],count[pos]);
	return 0;
}
/********************************************************************************************************/
#include <stdio.h>
#include<string.h>
int main(void) {
	int n,count[5]={0},top,pos,i,a=1,v;
	char name[5][10];
	printf("enter the number of parties:");
	scanf("%d",&n);
	printf("\nenter the names of the parties:");
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
	}
	strcpy(name[n],"dummy");
	do
	{
		for(i=0;i<=n;i++)
		{
			printf("%d.%s\t",(i+1),name[i]);
		}
		printf("\nEnter your vote:");
		scanf("%d",&v);
		if(v<=n && v>0)
		{
			count[v-1]++;
		}
		else
			count[n]++;
		printf("\ndo you want to continue?");
		scanf("%d",&a);
	}while(a==1);
	for(i=0;i<=n;i++)
	{
		printf("\n%d %s",count[i],name[i]);
	}
	/*top=count[0];
	for(i=1;i<(n+1);i++)
	{
		if(top<count[i])
		{
			top=count[i];
			pos=i;
		}
	}*/
	/*printf("\nPARTY\tVOTES");
	for(i=0;i<=n;i++)
	{
		printf("\n%d %s",count[i],name[i]);
	}*/
	printf("\nwinner of elections is %s with %d votes",name[pos],count[pos]);
	return 0;
}
