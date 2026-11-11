#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int regNo;
    int marks;

    char name[50];
    char grade;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter Registration Number: ");
        scanf("%d", &regNo);

        printf("Enter Student Name: ");
        scanf("%s", name);

        printf("Enter Marks: ");
        scanf("%d", &marks);

        if (marks >= 70)
            grade = 'A';

        else if (marks >= 60)
            grade = 'B';

        else if (marks >= 50)
            grade = 'C';

        else if (marks >= 40)
            grade = 'D';

        else
            grade = 'F';

        printf("\nSTUDENT INFORMATION\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        if (marks >= 40)
            printf("Status: PASSED\n");
        else
            printf("Status: FAILED\n");
    }

    return 0;
}

