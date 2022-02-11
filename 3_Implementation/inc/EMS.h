/**
 * @file EMS.h
 * @author anusha patil
 * @brief
 * 
 * @date 08-02-2022
 * 
 * /
 
 #ifndef __EMS_H__
 #define __EMS_H__

 #include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

/**
 * @brief add the employee record
 * like employee ID,name,age and salary
 * 
 */
void addrecord();


/**
 * @brief delete the employee record based on the employee id
 * take id from the user
 * if employee id matches with the existing employee id then delete that employee record
 * 
 */
void deleterecord();


/**
 * @brief Search the employee record based on the employee id
 * take id from the user
 * if employee id matches with the existing employee id then display the search result of employee record
 * 
 */
void searchrecord();


/**
 * @brief display the list of the employees
 * 
 */
void displayrecord();


/**
 * @brief modify the employee record based on the employee id
 * take id from the user
 * if employee id matches with the existing employee id then modify that employee record
 * 
 */
void modifyrecord();

#endif  /* #define __EMS_H__ */