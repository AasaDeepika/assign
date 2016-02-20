#include<stdio.h>

void main()
{

	int arr[6][6]={0},i,j;
	int k,num,sr,er,sc,ec,l;
	arr[0][0] = -1;
	arr[0][5] = -1;
	arr[2][2] = -1;
	arr[1][4] = -1;
	arr[3][0] = -1;
	arr[4][4] = -1;
	arr[5][0] = -1;
	arr[5][3] = -1;
    for(i=0;i<6;i++)
    {
		sr = ((i==0)? i:i-1);
		er = ((i==5)? i:i+1);
		for(j=0;j<6;j++)
		{
		 		sc = (j==0)?j:j-1;
				ec = (j==5)?j:j+1;
				if(arr[i][j]!=-1)		 
		 		{
					num=0;
		 		 	for(k=sr;k<=er;k++)
		 		 	{
		 		 		 for(l=sc;l<=ec;l++)
		 		 		 {
		 		 		 	if(arr[k][l] == -1)
		 		 		 	{
		 		 			   num++;
		 		 		 	}   
		 		 		 }
		 		 	}		
		 		 	arr[i][j]=num;
		 		}
		}
	}
	for(i=0;i<6;i++)
	{
	  for(j=0;j<6;j++)
	  {
	    	printf("%d  ",arr[i][j]);
	  }
	   printf("\n");
    }
}
