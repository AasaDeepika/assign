#include<stdio.h>
#include<string.h>
void letters_notused(int a[]);
void top_letters(int a[]);
void top_words(char a[][15],int n,int x);
int main(void) 
{
	FILE *f;
	char c;
	int i,j,word_ct=0,special_ct=0,let_ct=0,letter_ct[26]={0};
	char word[2000][15];
	f = fopen("place.txt","r");
	if(f == NULL)
	{
		printf("\n there is an fopen() Error!!!\n");
        return 0;
	}
	else
	{
		//toget the word count.------------------------------------------------------------------
		i=0;
		while(!feof(f))
		{
			c=fgetc(f);
			j=0;
			if((c>64 && c<91)||(c>96 && c<123))
			{
				while((c>64 && c<91)||(c>96 && c<123))
				{
					word[i][j++]=toupper(c);
					c=fgetc(f);		
				}
				word[i][j]='\0';
				i++;
			}
		}
		
		word_ct=i;
		printf("no. of words: %d",word_ct);
		//------------------------------------------------------------------------------------------
		
		//going backto beginning of file
		 rewind(f);
		 
		//to get the letter count and special character count-------------------------------------------------------------------
		while(!feof(f))
		{
			c=fgetc(f);
			if((c>64 && c<91)||(c>96 && c<123))
			{
				let_ct++;
				letter_ct[(toupper(c)-65)]++;
			}
			else if(!((c>47 && c<58)|| (c==32) || (c==10)))
			{
				special_ct++;

			}
		}
	
		printf("\nno. of letters: %d",let_ct);
		printf("\nno. of special characters: %d",special_ct);
		//------------------------------------------------------------------------------------------
		
		// to print LETTERS NOT USED ---------------------------------------------------------------
		printf("\nLetters not used: ");
		letters_notused(letter_ct);
		//-------------------------------------------------------------------------------------------
		
		// to get TOP THREE LETTERS -----------------------------------------------------------------
		if(let_ct < 3)
		{
			printf("\n very few letters!!! can't print top three letters!!!");
		}
		else
		{
			printf("\ntop three common letters: ");
			top_letters(letter_ct);
		}
		//---------------------------------------------------------------------------------------------
		
		// to get TOP THREE WORDS ---------------------------------------------------------------------
		if(word_ct < 3)
		{
			printf("\n very few words!!! can't print top three words!!!");
		}
		else
		{
			printf("\ntop three common words: ");
			top_words(word,word_ct,3);
		}
		//----------------------------------------------------------------------------------------------
		
		
		// to print the MOST COMMON FIRST WORD ---------------------------------------------------------
		rewind(f);
		i=1;
		while(!feof(f))
		{
			c=fgetc(f);
			if(c==10)
			{
				j=0;
				c=fgetc(f);
				while(c!=32 && c!= 10)
				{
					word[i][j++]=toupper(c);
					c=fgetc(f);

				}
				word[i++][j]='\0';
			}
		}
		word_ct=i;	
		printf("\nmost common first word: ");
		top_words(word,word_ct,1);
		//------------------------------------------------------------------------------------------
	}
	fclose(f);
	return 0;
}

// function to print LETTERS NOT USED ---------------------------------------------------------------
void letters_notused(int a[])
{
	int i,flag=0;
	for(i=0;i<26;i++)
	{
		if(a[i]==0)
		{
			printf("%c ",(i+65));
			flag=1;
		}
	}
	if(flag==0)
		printf("NIL!!!");
}
//-----------------------------------------------------------------------------------------------------

// function to print TOP THREE LETTERS-----------------------------------------------------------------
void top_letters(int a[])
{
	int big,index,i,j=0;
	
	while(j<3)
	{
		big=a[0];
		index=0;
		for(i=1;i<26;i++)
		{
			if(big<a[i])
			{
				big=a[i];
				index=i;
			}
		}
		printf("%c ",(index+65));
		a[index]=-1;
		j++;
	}
}
//-----------------------------------------------------------------------------------------------------

// function to print TOP THREE WORDS (and) MOST COMMON FIRST WORD--------------------------------------
void top_words(char a[][15],int n,int x)
{
	int i,j,k=0,big,index,size;
	int count[n];
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],"\0"))
		{
			count[k]=1;
			for(j=i+1;j<n;j++)
			{
				if(!(strcmp(a[i],a[j])))
				{
					strcpy(a[j],"\0");
					count[k]++;
				}
			}
			k++;
		}
	}
	size=k;

	k=0;
	while(k < x)
	{
		j=0;
		big=count[0];
		index=0;
		for(i=1;i<size;i++)
		{
			if(big<count[i])
			{
				big=count[i];
				index=i;
			}
		}
		count[index]= -1;
		
		i=0;
		
		while(j <= index)
		{
			if(strcmp(a[i],"\0"))
			{
				if(j == index)
				{
					printf("%s ",a[i]);
					break;
				}
				else
				{
					j++;
					i++;
				}
			}
			else
			{
				i++;
			}
		}
		k++;
	}
}
//--------------------------------------------------------------------------------------------------
