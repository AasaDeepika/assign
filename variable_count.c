#include<stdio.h>
#include<string.h>
int isnum(char a[])
{
	
	if((a[0]>=65 && a[0]<=90)||(a[0]>=97 && a[0]<=122))
	{
		return 0;
	}
	return 1;
}

int main()
{
	int i,l,j=0,k=0;
	char a[30],b[30],op[10][10];
	printf("Enter the equation:");
	scanf("%s",a);
	l=strlen(a);
	
	for(i=0;i<l;i++)
	{
		if((a[i]>=48 && a[i]<=57)||(a[i]>=97 && a[i]<=122)||(a[i]>=65 && a[i]<=90))
		{
			b[i]=a[i];
		}
		else 
		{
			b[i]='_';
		}
	}
	
	b[l]='_';
	
	for(i=0;i<l;i++)
	{
		if(b[i]=='_')
		{
			continue;
		}
		else
		{
			op[j][k]=b[i];
			k++;
			if(b[i+1]=='_')
			{
				op[j][k]='\0';
				j++;
				k=0;
				i++;
			}
		}
	}
	
	for(i=0;i<j;i++)
	{
		if(isnum(op[i]))
		{
			strcpy(op[i],"\0");
		}
	}
	
	for(i=0;i<j;i++)
	{
		if(strcmp(op[i],"\0")!=0)
		{
			for(k=i+1;k<j;k++)
			{
				if(strcmp(op[i],op[k])==0)
				{
				
					strcpy(op[k],"\0");
			
				}
			}
			printf("%s ",op[i]);
		}
	} 
	return 0;
}
