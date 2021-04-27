#include<stdio.h>

#include<math.h>

int main(){
int n,r=1;
scanf("%d",&n);
if (n>=2){
for (int i = 2; i < n; i++)
{
    if (n%i==0)
    {
         r=0;
        break;
    }   
}
if (r==0)
{
   printf("Not a prime number");
}
else{printf("Is a prime number");}
}
else if (n==1 || n==0)
{
    printf("Not a prime number");
}

return 0;
}
