#include <stdio.h>
int main() 
{
  int num,reversed = 0;

	printf("\n Enter an integer value to reverse it: ");
	scanf("%d",&num);

	while (num) {

		reversed = reversed * 10;
		reversed = reversed + (num%10);
		num = num / 10;
	}
  printf("\nreverse : %d",reversed);

 return 0;
}
