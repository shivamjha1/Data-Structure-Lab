#include<stdio.h>
int binary(int a[],int e)
{
    int l=0;
    int h=17;
    int mid,i,c=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(e==a[mid])
           { printf("item found at %d ",mid);
               break;
           }
           else if(e>a[mid])
            l=mid+1;
           else
            h=mid -1;
}

}
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int l,h,e,i,j,c=0, mid ;
    printf("enter element to be searched");
    scanf("%d",&e);
    binary(a,e);
    }



