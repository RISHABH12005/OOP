// Check Error in Code.
#include<stdio.h>
int main()
{
char *c;
float x=10;
c=&x;
printf("%d", *c);
return 0;
}
