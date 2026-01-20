#include<stdio.h>
int main()
{
  int a,flag=0,i=2;
  printf("Enter the number:");
  scanf("%d",&a);
while(a>i)
{
  if(a%i==0)
  {
    flag=1;
    break;
  }
i++;
}
if(flag==0)
  printf("Prime number");
else
  printf("Not Prime Number");

return 0;
}
