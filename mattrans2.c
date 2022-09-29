#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,t,k,m,n;
    scanf("%d%d",&m,&n);
    printf("mat A");
    for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
       }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n/2;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }

}
for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
}
}
