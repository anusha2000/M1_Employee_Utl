#include "employee.h"
void addrecord()
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
