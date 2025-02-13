// Check Error in Code.
#include<stdio.h>
int main()
{
int t[ ]= {1, 2, 3, 4, 5};
int *p, *q, *r; p=t; q=p[1]; r=p[2];
printf("%d%d%d", *p, *q, *r);
return 0;
}
