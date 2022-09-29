#include<stdio.h>
void main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int c,d,i,t;
    scanf("%d%d",&c,&d);

    for(i=9;i>=c;i--)
    {
        a[i]=a[i-1];
        }
        a[c]=d;
        for(i=0;i<10;i++)
            printf("%d ",a[i]);


}
