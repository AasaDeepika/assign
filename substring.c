#include <stdio.h>
int main(void) 
{
	char str1[20],str2[20];
	int i,j,count=1,flag=0;
	scanf("%s",str1);
	str2[0]=str1[0];
	for(i=1;str1[i]!='\0';i++)
	{
		for(j=0;j<count;j++)
		{
			if(str1[i]==str2[j])
			{
				
				flag=1;
				break;
			}
		}
		
		if(flag==1)
			break;
		str2[i]=str1[i];
		++count;
	}
	str2[count]='\0';
	
	printf("%s",str2);
	
	return 0;
}
