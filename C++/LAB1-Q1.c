#include<stdio.h>
fact(int n)
{
if(n==0)
    return 1;
else
return n*fact(n-1);
}
int main()
{
int n;
printf("enter the factorial number : ");
scanf("%d",&n);
printf("factorial%d is %d",n,fact(n));
return 0;
}
