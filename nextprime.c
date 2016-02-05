#include <stdio.h>
#include <stdlib.h>
int main(){
    int num,limit,i,p,j,*ptr,sum=0;
    printf("Enter number: ");
    scanf("%d",&num);
    limit=2*num;
    ptr=(int*)malloc(num*sizeof(int));  //memory allocated using malloc
    if(ptr==NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    for(i=0,j=num+1;i<num;++i,j++)
    {
        *(ptr+i)=j;
    }
    for (i=0,j=2; j<num;j++,i++)
    {
    	
        if(*(ptr+i)!=0 && *(ptr+i)%j==0)
		{
            // Update all multiples of p
            for (p=j; p*p<=limit; p+=j)
                *(ptr+i) = 0;
        }
        
    }
    for(i=0;i<num;i++)
    {
    	if(*(ptr+i)!=0)
    	{
    	printf("%d",*(ptr+i));
    	break;
        }
	}
    free(ptr);
    return 0;
}
