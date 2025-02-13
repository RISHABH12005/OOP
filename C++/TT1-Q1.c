// Check Error in Code.
#include<stdio.h>
int main()
{
    struct{
        short s[5];
        union{
            float y;
            long z;
        }u;
    }t;
}
