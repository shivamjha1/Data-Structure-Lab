#include<stdio.h>
int linear(int a[],int n, int e);
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=9,e;
    scanf("%d",&e);
    linear(a,n,e);
}
int linear(int a[], int n,int e)
{ int c=0, i ;
    for(i=0;i<n;i++)
    {
        if(e==a[i])
        {
            printf("element found at %d",i);
            c++;
            break;
        }

    }
    if(c==0)
        printf("element not found");
}
