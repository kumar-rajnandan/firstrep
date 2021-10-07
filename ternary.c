#include<stdio.h>

int main()
{
    int a,b,c;
    printf("input three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    //  working
    a>b ? b>c ? printf("%d<%d<%d",c,b,a) : printf("%d<%d<%d",b,c,a) : b<c ? printf("%d<%d<%d",a,b,c) : a<c ? printf("%d<%d<%d",a,c,b) : printf("%d<%d<%d",c,a,b);
    return 0;
}
