#include <stdio.h>

int main()
{
    int n,i,a,b,c;
    printf("Enter the limit:");
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=2;i<=n+1;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
