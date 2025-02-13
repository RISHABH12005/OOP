#include<stdio.h>
#include<string.h>
void str(char *s, char *t) {
    while(*s != '\0') {
        s++;}
    while((*s = *t) != '\0') {
        s++;
        t++;}
}
int main() {
    char s[100] = "Hello, ";
    char t[100] = "world!";
    strcat(s, t);
    printf("%s\n", s); // Output: "Hello, world!"
    return 0;
}
