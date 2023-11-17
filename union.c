#include <stdio.h>
#include <string.h> 

struct person {
    char name[50];
    char gender;
    int id;
};

union student_info {
    int mark;
    char parentname[50];
};

union employee_info {
    int salary;
    int hike;
};

struct student {
    struct person info;
    union student_info specifics;
}s;

struct employee {
    struct person info;
    union employee_info specifics;
}emp;

int main() {
    struct student s;
    strcpy(s.info.name, "Akash Dev");  
    s.info.gender = 'M';  
    s.info.id = 654654231;  
    s.specifics.mark = 85;  

    printf("Student's Information:\n");
    printf("Name: %s\n", s.info.name);
    printf("Gender: %c\n", s.info.gender);
    printf("Student ID: %d\n", s.info.id);
    printf("Mark: %d\n\n", s.specifics.mark);

    struct employee;
    strcpy(emp.info.name, "Alice");  
    emp.info.gender = 'F';  
    emp.info.id = 1234567;  
    emp.specifics.salary = 50000;  

    printf("Employee's Information:\n");
    printf("Name: %s\n", emp.info.name);
    printf("Gender: %c\n", emp.info.gender);
    printf("Employee ID: %d\n", emp.info.id);
    printf("Salary: $%d\n", emp.specifics.salary);

    return 0;
}

