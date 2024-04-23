#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

struct student {
    int rollnumber;
    char deptname[MAX_LENGTH];
    float cgpa;
};

int main() {
    struct student students[5];

    // Input student details
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &(students[i].rollnumber));

        printf("Department Name: ");
        scanf("%s", students[i].deptname);

        printf("CGPA: ");
        scanf("%f", &(students[i].cgpa));

        printf("\n");
    }

    // Print student details using structure pointers
    printf("Student Details:\n");
    for (int i = 0; i < 5; i++) {
        struct student *ptr = &students[i];
        printf("Student %d\n", i+1);
        printf("Roll Number: %d\n", ptr->rollnumber);
        printf("Department Name: %s\n", ptr->deptname);
        printf("CGPA: %.2f\n", ptr->cgpa);
        printf("\n");
    }

    return 0;
}
