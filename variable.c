#include<stdio.h>
#include<string.h>
int isnum(char a[])
{
	int i,n;
	/*n=strlen(a);
	for(i=0;i<n;i++)
	{*/
		if((a[0]>='A'&&a[0]<='Z')||(a[0]>='a'&&a[0]<='z'))
		{
			return 1;
		}
		return 0;
	//}
}
int main()
{
	char a[6][10]={"aa","A","a1","b2b","12","90"},op[6][10];
	int i,j=0;
	for(i=0;i<6;i++)
	{
		if(isnum(a[i]))
		{
			strcpy(op[j],a[i]);
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		/*if(a[i][0]=="\n")
		{
			continue;
		}
		else		
		{*/
			printf("%s ",op[i]);
		//}
	}
	return 0;
}
