#include <stdio.h>

// Define the structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks[10]; // Assuming a maximum of 10 subjects
};

int main() {
    int N, M;

    printf("Enter the number of students: ");
    scanf("%d", &N);

    printf("Enter the number of subjects per student: ");
    scanf("%d", &M);

    // Declare an array of structures to store student information
    struct Student students[N];

    // Input information for each student
    for (int i = 0; i < N; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Enter marks for %d subjects:\n", M);
        for (int j = 0; j < M; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Calculate and print the average marks for each student
    printf("\nAverage Marks for Each Student:\n");
    for (int i = 0; i < N; i++) {
        float totalMarks = 0.0;
        for (int j = 0; j < M; j++) {
            totalMarks += students[i].marks[j];
        }
        float averageMarks = totalMarks / M;

        printf("Student %d (%s): %.2f\n", students[i].rollNumber, students[i].name, averageMarks);
    }

    return 0;
}
