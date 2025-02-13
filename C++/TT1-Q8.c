// Check Error in Code.
#include<stdio.h>
struct ouriode
{
    char x,y,z;
};
    int main()
    {
        struct ouriode p={'1','0','a'+2};
        struct ouriode*q=&p;
        printf("%c,%c",*(char*)q+1);
        *((char*)q+2);
        return 0;
}
