// Check Error in Code.
# include <stdio.h>
int main ()
{
int k;
int a[ ]={1, 2, 3};
int *b[3];
int **c[3];
int ***d[3];
int ****e[3];
int *****f[3];
for(k=0; k<3; k++)
{
b[k] = a+k;
c[k] = b+k;
d[k] = c+k;
e[k] = d+k;
f[k] = e+k;
}
for (k=0; k<3; k++)
{
printf("%3d", *b[k]);
printf("%3d", **c[k]);
printf("%3d", ***d[k]);
}
return 0;
}
