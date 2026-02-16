#include <stdio.h>
int main(){
  int num,rev=0,rem;
printf("Enter a number:");
scanf("%d",&num);
while(num>0)
  rem=num%10;  
  rev=rev+rem*10;  
  num/=10;  
printf("Reversed number=%d",num);
return 0;
}
