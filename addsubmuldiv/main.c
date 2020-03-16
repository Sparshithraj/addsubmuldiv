#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x,a,b,res;
  printf("enter the values of a  and b \n");
  scanf("%f%f",&a,&b);
  printf(" enter 1 to add \n enter 2 to sub \n enter 3 to mul \n enter 4 to div \n");
  scanf("%f",&x);
  if (x==1)
    res = a+b;
  else if (x==2)
    res = a-b;
  else if (x==3)
    res = a*b;
  else if (x==4)
    res = a/b;
  else
  { printf("invalid entry");
    return ;}
  printf("the result is %f", res);
return 0;
}
