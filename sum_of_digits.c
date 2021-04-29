#include<stdio.h>

int sum(int n){
    static int s=0;
    if (n==0)
    {
        return s;
    }
    else {
        s=s+n%10;
        n=n/10;
        return sum(n);
    }
}
int main(){
int n;
printf("input number : ");
scanf("%d",&n);
int su=sum(n);
printf("sum of digits : %d",su);
return 0;
}
