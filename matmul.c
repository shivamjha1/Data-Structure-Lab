#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,m,n,x,y;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    printf("mat A");
    for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
       }
    printf("mat B");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        scanf("%d",&b[i][j]);
    }
    printf("SUM=\n");
    for(i=0;i<n;i++)
        {for(j=0;j<y;j++){
            c[i][j]=0;
        for(k=0;k<m;k++){
            c[i][j]= c[i][j]+a[i][k]*b[k][j];
        }}


}for(i=0;i<n;i++)
       {
           for(j=0;j<y;j++)
        printf("%d ",c[i][j]);
       printf("\n");}

}

