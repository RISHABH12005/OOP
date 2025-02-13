// Check Error in Code.
#include<stdio.h>
int main()
{
    char inchar='A';
    switch(inchar)
    {
    case'A':
        printf("choice A\n");
    case'B':
        printf("choice B\n");
    case'C':
    case'D':
    case'E':
    default:
        printf("no choice");
    }
}
