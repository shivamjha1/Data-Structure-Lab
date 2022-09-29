#include<stdio.h>
void main()
{
    int a[10],m,n,b[10],i=0,j=0,k=0,l=0,c[10],d[10],ch,co;
    printf("Enter length of both array-");
    scanf("%d%d",&m,&n);
    printf("Enter elements if 1st array-");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter elements if 2nd array-");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<m;i++)
    { co=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
                co++;
        }
        if(co==0)
        {c[k]=a[i];
        k++;}
    }
    for(i=0;i<n;i++)
    { co=0;
        for(j=0;j<m;j++)
        {
            if(b[i]==a[j])
                co++;
        }
        if(co==0)
        {d[l]=b[i];
        l++;}
    }
    for(i=0;i<k;i++)
    printf("%d ",c[i]);
    for(i=0;i<l;i++)
        printf("%d ",d[i]);
    }





