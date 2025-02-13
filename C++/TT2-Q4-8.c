// Check Error in Code.
#include<stdio.h>
struct video
{
char name[50];
int ranking;
};
int main() {
struct video cats = {"CatVid", 53};
struct video *ptr;
ptr = &cats;
return 0;
}
