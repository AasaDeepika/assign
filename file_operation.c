#include <stdio.h>
int main(void) 
{
	FILE *f;
	int let_ct=0,word_ct=0,spec_ct=0,i; 
	int lat_ct_arr[52];
	char c;
	f=fopen("apj.txt","r");
	if(f==NULL)
	{
		printf("\n fopen() Error!!!\n");
        return 1;
	}
	c=fgetc;
	if(!feof(f) && !(c>64 && c<91)||(c>96 && c<123))
	{
          word_ct=1;
    }
	else
	{
		//toget the word count.
		while(!feof(f))
		{
			c=fgetc(f);
			if((c>64 && c<91)||(c>96 && c<123))
			{
				continue;
			}
			else
			{
				
			}
		}
		
		//going backto beginning of file
		 fseek( f, 0, SEEK_SET );
		 
		//to get the letter count.
		while(!feof(f))
		{
			c=fgetc(f);
			if((c>64 && c<91)||(c>96 && c<123))
			{
				let_ct++;
			}
		}
		
		fseek( f, 0, SEEK_SET );
		
		//to count special characters.
		while(!feof(f))
		{
			c=fgetc(f);
			if(!(c>64 && c<91)||(c>96 && c<123)|| (c>47 && c<58)|| (c==32))
			{
				spec_ct++;
			}
		}
		
		fseek( f, 0, SEEK_SET );
		
		
		
		
		
	}
	return 0;
}
