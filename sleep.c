#include<stdio.h>
#include<unistd.h>
int main() 
{
  int i;
  char str[]="HAPPY PONGAL";
  for(i=0;str[i]!='\0';i++)
  {
    printf("%c",str[i]);
    sleep(1);
  }
  return 0;
}
