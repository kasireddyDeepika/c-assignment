#include<stdio.h>
int main()
{
  int x,y,z;
printf("enter the values of x,y and z:");
scanf("%d%d%d,&x,&y,&z");
if(x>y && x>z)
  printf("greatest number is %d",x);
else if(y>x && y>z)
  printf("greatest number is %d",y);
else
  printf("greatest number is %d",z);
return 0;
}
