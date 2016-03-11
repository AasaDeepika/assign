#include<stdio.h>
#include<ctype.h>
#include<string.h>
int Check(char b[],int n);
int main()
{
	int l,i,j=0,count;
	char a[20],b[20];
	printf("\nEnter The Equation:");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(isalpha(a[i]))
		{
			b[j]=a[i];
			j++;
		}
	}
	count=Check(b,j);	
	printf("\ncount:%d",count);
	return 0;
}
int Check(char b[],int n)
{
	int i,j,k,count=0;
	for(i=0;i<n;i++)		
	{
		for(j=i+1;j<n;)
		{
			if(b[i] == b[j])
			{
				for(k=j;k<n;k++)
				{
					b[k]=b[k+1];
				}
				n--;
			}
			else
				j++;
		}
	}
	return n;
}
