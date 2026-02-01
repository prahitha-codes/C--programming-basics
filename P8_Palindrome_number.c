#include <stdio.h>

int main()
{
    int n,s,rem=0,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(s==rev)
    {
        printf("%d is a palindrome number",s);
    }
    else
    {
        printf("%d is not a palindrome number",s);
    }

    return 0;
}
