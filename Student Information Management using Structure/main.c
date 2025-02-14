#include <stdio.h>

// Define structure for Student
struct Student {
    char name[20];
    int id;
    float cgpa;
    char course[50];
};

int main() {
    // Declare an array of 5 students
    struct Student students[5] = {
        {"Raisha", 101, 3.85, "Computer Science"},
        {"Rokaiya", 102, 3.90, "English Language and Literature"},
        {"Hiya", 103, 3.75, "Agriculture Economics"},
        {"Hridi", 104, 3.80, "Pharmacy"},
        {"Sadia", 105, 3.95, "Computer Science"}
    };

    // Display student details
    printf("Student Details:\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("CGPA: %.2f\n", students[i].cgpa);
        printf("Course: %s\n", students[i].course);
        printf("-----------------------------------------\n");
    }

    return 0;
}
