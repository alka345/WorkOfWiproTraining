/*
scan and print Employee details 

o/p
========================================
            Employee Details
========================================

SLNo    ID  Name    Gender    Sal Phno    Address
----    --- ------- ------    ---   ------  -------
1       101 Bhima   M         10000.5 99999 Kar
*/ 

#include <stdio.h>

int main(){

    int SLNo,ID;
    char Name[20],Phno[10],Address[20],Gender;
    float Sal;
    

    printf("============================================================\n\n");
    printf("\t\t\tEmployee Details\n\n");
    printf("============================================================\n\n");
    printf("SLNo\tID\tName\tGender\tSal Phno\tAddress\n");
    printf("----\t---\t-------\t-----\t---\t-----\t------------\n");

    scanf("%d  %d %s %c %f %s %s",&SLNo,&ID,Name,&Gender,Sal,Phno,Address);
    printf("%d %d %s %c %f %s %s",SLNo,ID,Name,Gender,Sal,Phno,Address);



    return 0;
}