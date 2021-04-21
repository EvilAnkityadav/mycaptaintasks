#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
int x,y;
scanf("%d %d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf("%d %d",x,y);
return 0;
}
