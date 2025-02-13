#include <stdio.h>
int str(char*str){
    int len=0;
    while(str[len]!='\0'){
    len++;}
    return len;}
int main(){
    char in[100];
    printf("Enter a string: ");
    fgets(in,sizeof(in),stdin);
    int L=str(in);
    if(in[L-1]=='\n'){
        in[L-1]='\0';}
    int len=str(in);
    printf("Length of the string: %d\n",len);
    return 0;}
