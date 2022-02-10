//Header files
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct employee     ///structure to declare the employee details like ID,Name,Age and Salary
{
    int id;
    char name[50];
    int age;
    float salary;
};
struct employee e[100];
int key=0;
void addrecord()                ///Function for adding employee record
 {
     char another='y';
     while(another=='y')
     {
         printf("\nEnter ID: ");
         scanf("%d",&e[key].id);        
         printf("\nEnter Name: ");
         scanf("%s",e[key].name);
         printf("\nEnter Age: ");
         scanf("%d",&e[key].age);
         printf("\nEnter Salary: ");
         scanf("%f",&e[key].salary);
         key++;
         printf("\n Want to add another record (y/n): ");
         fflush(stdin);
         scanf("%c",&another);
     }
 }
void displayrecord()            ///Function for Displaying employee records
 {
     int i;
     printf("\n employee ID\temployee name\temployee age\temployee salary\n");
     for(i=0;i<key;i++)
     {
          printf("\n%d\t\t %s\t\t %d\t\t %f\n",e[i].id,e[i].name,e[i].age,e[i].salary);
     }
}
void searchrecord()         ///Function for searching the record of the employee based on their ID
{
    int i,id,flag=0;
    printf("Enter employee ID to search\n");
    scanf("%d",&id);           ///read employee id from the user
    for(i=0;i<key;i++)
    {
        if(e[i].id==id)     ///if the employee id matches with any id in the list
        {
           flag=1;          ///flag variable is assigned to 1
           break;           ///break the loop
        }
    }
    if(flag==1)         ///if flag is equal to 1
       printf("\n%d\t\t %s\t\t %d\t\t %f\n",e[i].id,e[i].name,e[i].age,e[i].salary);    ///printf the respective employee record
    else
        printf("Record not found\n");       ///or else print record not found
}
void deleterecord()     ///Function for deleting the record of the employee based on their employee ID
{
    int i,id;
    printf("Enter employee ID to delete the employee record\n");
    scanf("%d",&id);                ///read employee id from the user
    for(i=0;i<(key-1);i++)
    {
        if(e[i].id==id)             ///if the employee id matches with any id in the list
        {
            e[i].id=e[i+1].id;              ///delete the that employee record using this loop
            strcpy(e[i].name,e[i+1].name);
            e[i].age=e[i+1].age;
            e[i].salary=e[i+1].salary;
            //break;
        }
    }
    printf("\n Deleted\n");
    key=key-1;
}
void modifyrecord()         ///Function for modifying the record of the employee based on their employee ID
{
    int i,id;
    printf("Enter employee ID to delete the employee record\n");
    scanf("%d",&id);        ///read employee id from the user
    for(i=0;i<key;i++)
    {
        if(e[i].id==id)     ///if the employee id matches with any id in the list
        {
            ///modify the respective employee record according to the user
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
int main()
{
    int choice;
    printf("--------------EMPLOYEE RECORDS----------------\n");
    
    /// infinite loop continues untile the break statement encounter
    while(1)
    {
        printf("\n 1.Add Record\n 2.Delete Record\n 3.Search Record\n 4.Display Record\n 5.Modify Record\n 6.Exit\n");
        printf("Enter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: addrecord();        /// if user press 1 then add record
            break;
            case 2: deleterecord();     /// if user press 2 then delete the existing record
            break;
            case 3: searchrecord();     /// if user press 3 then search the record
            break;
            case 4: displayrecord();     /// if user press 4 then display the employee records
            break;
            case 5: modifyrecord();     /// if user press 5 then do modify the existing record
            break;
            case 6: exit(0);
            break;
            default:
                printf("INVALID CHOICE\n");
        }
    }
    return 0;
}
