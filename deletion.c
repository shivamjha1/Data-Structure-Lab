#include<stdio.h>
void main()
{
    int a[10]={1,2,3,4,2,6,7,8,2,1};
    int i=0,j,n;
    printf("enter the num-");
    scanf("%d",&n);
    int m=0;
    while(i<10)
    {
        if(a[i]==n)
        {for(j=i;j<10;j++)
            {a[j]=a[j+1];
            }


        }
        else
            m++;
        i++;
    }
    for(i=0;i<m;i++)
        printf("%d ",a[i]);

}
