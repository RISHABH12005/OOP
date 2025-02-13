#include <stdio.h>
#include <math.h>
int main(){
int n;
for(int a=1;a<=9;a++){
for(int b=0;b<=9;b++){
if(a!=b){
n=a*1100+b*11;
int root=sqrt(n);
if(root*root==n){
printf("The 4-digit no. AABB is: %d\n",n);
return 0;}}}}
printf("No sol found.\n");
return 0;}
