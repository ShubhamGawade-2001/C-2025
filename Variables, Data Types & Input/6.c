#include<stdio.h>

int main()
{
    char name[20];
    char lname[20];
    int age;
    printf("ENter your first name: ");
    scanf("\n %s",&name);
    printf("ENter your last name: ");
    scanf("\n %s",&lname);
    printf("ENter your age: ");
    scanf("\n %d",&age);
    
    printf("\n Welcome %s %s , %d yrears old!",name,lname,age);
        return 0;
}