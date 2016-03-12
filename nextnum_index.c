#include<stdio.h>
int check(int ar[],int n,int num,int low,int high);
int main()
{
	int ar[20],i,n,num,op,high,low;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("\nEnter array in asc order:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nnum:");
	scanf("%d",&num);
	low = 0;
	high = n-1;
	op=check(ar,n,num,low,high);
	printf("\no/p:%d",op);
	return 0;
}
int check(int a[],int n,int num,int low,int high)
{
	int mid,i;
	do
	{
		mid = (low + high)/2;
		if(num<a[mid])
		{
			while(a[mid]==a[mid+1])
			{
				mid++;
			}
			return mid;
		}	
		else if(num>a[mid])
		{
			low=mid+1;
		}
		else
			low=mid;
	}while(low<=high);
	return (-1);
}
