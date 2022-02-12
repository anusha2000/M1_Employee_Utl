#include "employee.h"
void searchrecord()
{
    int i,id,flag=0;
    printf("Enter employee ID to search\n");
    scanf("%d",&id);
    for(i=0;i<key;i++)
    {
        if(e[i].id==id)
        {
           flag=1;
           break;
        }
    }
    if(flag==1)
       printf("\n%d\t\t %s\t\t %d\t\t %f\n",e[i].id,e[i].name,e[i].age,e[i].salary);
    else
        printf("Record not found\n");
}