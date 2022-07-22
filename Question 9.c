#include<stdio.h>
int main()
{
    int a,b,i,max;
    printf("enter the two number");
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    while(1)
    {
        if(max%a==0&&max%b==0)
            {
         printf("LCM =%d",max);
         break;
    }
    max++;
    }
    return 0;
}
