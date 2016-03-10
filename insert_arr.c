#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,num,x,*ptr;
	printf("enter size of array:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("\narray:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&*(ptr+i));
	}
	printf("\nnum:");
	scanf("%d",&num);
	printf("\nindex:");
	scanf("%d",&x);
	for(i=n;i>x-1;i--)
	{
		*(ptr+i)=*(ptr+i-1);
	}
	*(ptr+x)=num;
	printf("\n arr: ");
	for(i=0;i<n+1;i++)
	{
		printf("%d ",*(ptr+i));
	}
	
}
