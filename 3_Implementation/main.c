#include "employee.h"
#include<stdio.h>
int main()
{
    int choice;
    printf("--------------EMPLOYEE RECORDS----------------\n");
    while(1)
    {
        printf("\n 1.Add Record\n 2.Delete Record\n 3.Search Record\n 4.Display Record\n 5.Modify Record\n 6.Exit\n");
        printf("Enter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: addrecord();
            break;
            case 2: deleterecord();
            break;
            case 3: searchrecord();
            break;
            case 4: displayrecord();
            break;
            case 5: modifyrecord();
            break;
            case 6: exit(0);
            break;
            default:
                printf("INVALID CHOICE\n");
        }
    }
    return 0;
}