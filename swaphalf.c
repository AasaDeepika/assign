#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a,x,r,div,size=0,num=0;
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		a=a/10;
		size++;
	}
	a=n;
	x=size/2;
	div=(size%2==0)?x:(x+1);
	for(i=0;i<x;i++)
	{
		r=a%10;	
		a=a/10;
		num=num+r*(pow(10,i));
	}
	num=num*pow(10,div)+n/pow(10,x);
	printf("%d",num);
	return 0;
}
