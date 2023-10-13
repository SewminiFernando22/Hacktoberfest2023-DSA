#include <stdio.h>

char calculateGrade(float score) {
    if (score >= 0 && score < 30) {
        return 'F';
    } else if (score >= 30 && score < 45) {
        return 'S';
    } else if (score >= 45 && score < 55) {
        return 'C';
    } else if (score >= 55 && score < 65) {
        return 'B';
    } else if (score >= 65 && score < 75) {
        return 'A';
    } else if (score >= 75 && score <= 100) {
        return 'A+';
    } else {
        return 'I'; // Invalid
    }
}

int main() {
    int numSubjects = 5;
    float totalScore = 0;

    for (int i = 1; i <= numSubjects; i++) {
        float score;
        printf("Enter score for subject %d: ", i);
        if (scanf("%f", &score) != 1) {
            printf("Invalid input. Please enter a valid numeric score.\n");
            return 1;
        }
        totalScore += score;
    }

    float averageScore = totalScore / numSubjects;
    char finalGrade = calculateGrade(averageScore);

    printf("Average Score: %.2f\n", averageScore);
    printf("Final Grade: %c\n", finalGrade);

    if (finalGrade == 'A+' || finalGrade == 'A') {
        printf("Congratulations! You have performed exceptionally well.\n");
    } else if (finalGrade == 'F') {
        printf("You need to improve your performance to pass.\n");
    } else {
        printf("Keep up the good work!\n");
    }

    return 0;
}
