#include<stdio.h>
int main()
{
    int i=1,n,s=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<=n)
    {

        s=s+i*2;
        i++;
    }
    printf("Sum of N natural numbers =%d",s);
}

