//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

//gcc employeeMain.c employeeTable.c employeeTwo.c 

#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 

int main(void){ 
    //defined in employeeSearchOne.c 
     PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
     PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
     PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, char* numberToFind); 
     PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salary); 

    //defined in employeeTable.c 
    extern Employee EmployeeTable[]; 
    extern const int EmployeeTableEntries; 
    PtrToEmployee matchPtr; //Declaration 

  //  printf("%d", EmployeeTable);

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 
  //  printf("\n%d", matchPtr);

    //Example not found 

//    if (matchPtr != NULL) 
//        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
//    else 
//        printf("Employee ID is NOT found in the record\n"); 

 //Example found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
//    printf("%d", EmployeeTable);
//    printf("\n%d", matchPtr);
//    if (matchPtr != NULL) 
//        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
//    else 
//        printf("Employee Tony Bobcat is NOT found in the record\n"); 
    
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "310-555-1215"); 
//    printf("%d", EmployeeTable);
//    printf("\n%d", matchPtr);
    if (matchPtr != NULL) 
        printf("Employee Phone Number: 310-555-1215 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Phone Number: 310-555-1215 is NOT found in the record\n"); 


    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "310-555-3000"); 
//    printf("%d", EmployeeTable);
//    printf("\n%d", matchPtr);
    if (matchPtr != NULL) 
        printf("Employee Phone Number: 310-555-3000 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Phone Number: 310-555-3000 is NOT found in the record\n");


    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.50); 
    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee Salary 4.50 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Salary 4.50 is NOT found in the record\n"); 


    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.95); 
    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee Salary 4.95 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Salary 4.95 is NOT found in the record\n"); 

return EXIT_SUCCESS; 
} 