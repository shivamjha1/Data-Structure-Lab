#include<stdio.h>

void main()
{ int n;
    printf("enter a number-");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);}
        for(i=0;i<n;i++)
    printf("%d ",a[i]);

}
