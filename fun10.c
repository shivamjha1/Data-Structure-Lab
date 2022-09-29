#include<stdio.h>
int poww(int n,int p)
{ if(p==1)
        return n;
    else
    { return n* pow(n,p-1);
}
}
void main()
{
    int n,p,m;
    int x=1;
    printf("enter number and power");
    scanf("%d%d",&n,&p);
    m=poww(n,p);
    printf("%d",m);
}
