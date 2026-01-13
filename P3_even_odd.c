#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
if(n%2==0)
{
 printf("%d is an EVEN NUMBER",n);
}
else
{
  printf("%d is a ODD NUMBER",n);
}
return 0;
}
