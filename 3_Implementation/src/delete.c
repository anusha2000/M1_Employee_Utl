#include "employee.h"
void deleterecord()
{
    int i,id;
    printf("Enter employee ID to delete the employee record\n");
    scanf("%d",&id);
    for(i=0;i<(key-1);i++)
    {
        if(e[i].id==id)
        {
            e[i].id=e[i+1].id;
            strcpy(e[i].name,e[i+1].name);
            e[i].age=e[i+1].age;
            e[i].salary=e[i+1].salary;
            //break;
        }
    }
    printf("\n Deleted\n");
    key=key-1;
}