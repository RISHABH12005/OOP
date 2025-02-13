// Code of Revers String.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5];
    printf("Enter the Words: ");
    gets(str);
    int i,l;
    for(i=0;i<l/2;l++)
    {
        str[i]=str[i]=str[l-i-1];
        str[l-i-1]=str[i]=str[l-i-1];
        str[i]=str[i]-str[l-i-1];
    }
    puts(str);
}
