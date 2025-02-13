// Check Error in Code.
# include <stdio.h>
int main()
{
int a = 2, *p, **q;
p=&a;
q=&p;
printf("%d%d%d", a, *p, **q);
return 0;
}
