#include "employee.h"
void displayrecord()
 {
     int i;
     printf("\n employee ID\temployee name\temployee age\temployee salary\n");
     for(i=0;i<key;i++)
     {
          printf("\n%d\t\t %s\t\t %d\t\t %f\n",e[i].id,e[i].name,e[i].age,e[i].salary);
     }
}