#ifndef EMS_H_
#define EMS_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
    int age;
    float salary;
};
struct employee e[100];
int key=0;
void addrecord();
void deleterecord();
void searchrecord();
void displayrecord();
void modifyrecord();
#endif
