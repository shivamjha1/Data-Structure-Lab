#include<stdio.h>
int fibb(int n,int i)
{ j=1;
    if(i==n)
        return i;
    else
        return i+j;

}
void main()
{
    int n;
    printf("enter the range-");
    scanf("%d",&n);
    printf("%d",fibb(n,1));
}
