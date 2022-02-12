#include "employee.h"
void modifyrecord()
{
    int i,id;
    printf("Enter employee ID to delete the employee record\n");
    scanf("%d",&id);
    for(i=0;i<key;i++)
    {
        if(e[i].id==id)
        {
            printf("\nEnter ID: ");
            scanf("%d",&e[i].id);
            printf("\nEnter Name: ");
            scanf("%s",e[i].name);
            printf("\nEnter Age: ");
            scanf("%d",&e[i].age);
            printf("\nEnter Salary: ");
            scanf("%f",&e[i].salary);
            break;
        }
    }
}