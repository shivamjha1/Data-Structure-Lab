#include<stdio.h>
void main()
{
    int a[10],b[10];
    int c[20],i=0,j=0,k=0,n,m;
    printf("enter length of A and B");
    scanf("%d%d",&n,&m);
    printf("enter sorted elements of A-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter sorted elements of B-");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;j=0;
    while(i<n && j<m )
    {
        if(a[i]==b[j])
        {
            c[k]=a[i];
            i++;
            j++;
            k++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
    }
    for(i=0;i<k;i++)
        printf("%d ",c[i]);
}
