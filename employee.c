#include<stdio.h>
struct employee
{
    int age,salary,phoneNo;
    char name[25];
}
emp[100];
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as name , age , phone no. , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",&emp[i].name,&emp[i].age,&emp[i].phoneNo,&emp[i].salary);
    }
    printf("\nNAME\tAGE\tPHONE NO.\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phoneNo,emp[i].salary);
    }
}