#include <stdio.h>

union unionJob {
    char name[32];
    float salary;
    int workerNo;
} uJob;

struct structJob {
    char name[32];
    float salary;
    int workerNo;
} sJob;

int main() {
    printf("Size of unionJob: %lu bytes\n", sizeof(uJob));
    printf("Size of structJob: %lu bytes\n", sizeof(sJob));

    // Initialize members of the union
    uJob.workerNo = 10;
    printf("Union Job: Worker Number = %d\n", uJob.workerNo);

    uJob.salary = 2000.50;
    printf("Union Job: Salary = %.2f\n", uJob.salary);

    strcpy(uJob.name, "John Doe");
    printf("Union Job: Name = %s\n", uJob.name);

    // Initialize members of the structure
    strcpy(sJob.name, "Jane Smith");
    sJob.salary = 3000.75;
    sJob.workerNo = 20;

    printf("\nStruct Job: Name = %s\n", sJob.name);
    printf("Struct Job: Salary = %.2f\n", sJob.salary);
    printf("Struct Job: Worker Number = %d\n", sJob.workerNo);

    return 0;
}
