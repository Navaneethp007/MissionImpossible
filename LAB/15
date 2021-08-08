#include<stdio.h>

struct emp_det{
    int employee_No;
    char employee_Name[100];
    float employee_data;
} employee[100];


void main(){
    int n, x;
    char name[100];
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    printf("Enter the details of the employees\n");
    for(int i=0; i<n; i++){
        printf("\t Employee No: ");
        scanf(" %d", &employee[i].employee_No);
        printf("\t Name: ");
        fflush(stdin);
        scanf(" \t %s", &employee[i].employee_Name);
        printf("\t Weight: ");
        scanf(" %f",&employee[i].employee_data);
        printf("\n");
    }

    printf("\n\nEnter the Employee No. to be searched: ");
    scanf("%d", &x);
    int i;
    for(i=0; i<n; i++){
        if(employee[i].employee_No == x) {
            printf("\n");
            printf("Data of Employee: ");
            printf("\n\t Employee No: %d", employee[i].employee_No);
            printf("\n\t Name: %s", employee[i].employee_Name);
            printf("\n\t Weight: %.2f kg", employee[i].employee_data);
            printf("\n");
            break;
        }
    }
    if(i==n)
        printf("\n\nEmployee not found.");
}
