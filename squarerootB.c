#include<stdio.h>
float squareRoot(float n);
float main()
{
    float num;
    scanf("%f",&num);
    printf(" root of %f is %f", num, squareRoot(num));
    return 0.0;
}
float squareRoot(float n)
{
  float x=n;
  float y=1;
  float e=0.000001;
  while(x-y>e)
  {
    x=(x+y)/2;
    y=n/x;
  }
  return x;
}
