#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,n;
    scanf("%d",&n);
    printf("mat A");
    for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
       }
    printf("mat B");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    printf("SUM=");
    for(i=0;i<n;i++)
        {for(j=0;j<n;j++){
        a[i][j]=a[i][j]+b[i][j];
        printf("%d ",a[i][j]);}
        printf("\n");

}
}
