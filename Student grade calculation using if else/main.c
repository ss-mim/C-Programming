#include <stdio.h>

int main() {
    int score;

    // Input student's score
    printf("Enter the student's score: ");
    scanf("%d", &score);

    // Determine grade using if-else conditions
    if (score >= 80) {
        printf("Grade: A+\n");
    } else if (score >= 75) {
        printf("Grade: A\n");
    } else if (score >= 70) {
        printf("Grade: A-\n");
    } else if (score >= 65) {
        printf("Grade: B+\n");
    } else if (score >= 60) {
        printf("Grade: B\n");
    } else if (score >= 55) {
        printf("Grade: B-\n");
    } else if (score >= 50) {
        printf("Grade: C+\n");
    } else if (score >= 45) {
        printf("Grade: C\n");
    } else if (score >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
