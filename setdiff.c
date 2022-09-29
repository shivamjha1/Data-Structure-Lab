#include<stdio.h>
void main()
{
    int a[8]={1,2,3,4,5,6,7,8};
    int b[6]={2,4,6,8,10,12};
    int i=0,j=0,k=0;
    int c[10],co;
    for(i=0;i<8;i++)
    { co=0;
        for(j=0;j<6;j++)
        {
            if(a[i]==b[j])
                co++;
        }
        if(co==0)
        {c[k]=a[i];
        k++;}
    }
  /*  for(i=0;i<6;i++)
    { co=0;
        for(j=0;j<8;j++)
        {
            if(b[i]==a[j])
                co++;
        }
        if(co==0)
        {c[k]=b[i];
        k++;}
    } */
    for(i=0;i<k;i++)
    printf("%d ",c[i]);

}


