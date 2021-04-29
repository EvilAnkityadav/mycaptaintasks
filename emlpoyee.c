#include<stdio.h>
#include<stdlib.h>
#define size 20
struct employee {
    long int phone_number;
    int salary;
    char name[20];
    int age;
};
int main(){
struct employee e[size];
int i=0;
for (int i = 0; i < size; i++)
{
    printf("Enter the details of employee %d :\n",i+1);
    printf("Enter the name of employee %d : ",i+1);
    scanf("%s",e[i].name);              //fflush(stdin);
    printf("Enter the age of employee %d : ",i+1);
    scanf("%d",&e[i].age);              //fflush(stdin);
    printf("Enter the salary of employee %d : ",i+1);
    scanf("%d",&e[i].salary);           //  fflush(stdin);
    printf("Enter the phone_number of employee %d : ",i+1);
    scanf("%ld",&e[i].phone_number);    // fflush(stdin);
}
printf("\n\n");
 
int num;
printf("enter the employee number to see details (please input number between 1-%d) :",size);
scanf("%d",&num);

printf("name of employee %d          :%s    \n",num,e[num-1].name);
printf("age of employee %d           :%d    \n",num,e[num-1].age);
printf("phone_number of employee %d  :%ld   \n",num,e[num-1].phone_number);
printf("salary of employee %d        :%d    \n",num,e[num-1].salary);


return 0;
}
