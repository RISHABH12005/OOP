#include<stdio.h>
int round(int n);
void main()
{
  int n;
  printf("enter the no. ");
  scanf("%d",&n);
  round(n);
}
int round(int n)
{ int i;
   for(i=n;;i++)
   { if(i%7==0)
        { printf("%d",i);
             break;
             }}}
