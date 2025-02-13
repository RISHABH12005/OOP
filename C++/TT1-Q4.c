// Check Error in Code.
#include<stdio.h>
void F(int*p,int*q)
{
    p=q;
    *p=2;
}
int i=0,j=1;
int main()
{
    F(&i,&j);
    printf("%d%d\n",i,j);
    getchar();
    return 0;
}
