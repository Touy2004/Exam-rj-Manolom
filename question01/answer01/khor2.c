#include <stdio.h>

void calculateScore(int mathScore, int physicScore, int laoLangScore, int kmeScore);
void handleError(char firstName[100], char lastName[100], int id, int mathScore, int physicScore, int laoLangScore, int kmeScore);
char calculateGrade(int totalScore);

void main()
{
    char firstName[100], lastName[100];
    int id, mathScore, laoLangScore, physicScore, kmeScore;

    printf("Input your Information\n\n");
    printf("Input your id student: ");
    scanf("%d", &id);
    printf("Input your first name: ");
    scanf("%s", firstName);
    printf("Input your last name: ");
    scanf("%s", lastName);

    printf("\nInput your scores\n\n");
    printf("Input your math score: ");
    scanf("%d", &mathScore);
    printf("Input your Lao language score: ");
    scanf("%d", &laoLangScore);
    printf("Input your physics score: ");
    scanf("%d", &physicScore);
    printf("Input your kme score: ");
    scanf("%d", &kmeScore);

    handleError(firstName, lastName, id, mathScore, laoLangScore, physicScore, kmeScore);

    printf("\nYour Information\n\n");
    printf("id: %d\n", id);
    printf("first name: %s\n", firstName);
    printf("last name: %s\n\n", lastName);

    printf("Your Scores\n\n");
    printf("math score: %d\n", mathScore);
    printf("physics score: %d\n", physicScore);
    printf("Lao language score: %d\n", laoLangScore);
    printf("kme score: %d\n\n", kmeScore);

    calculateScore(mathScore, laoLangScore, physicScore, kmeScore);

}

void calculateScore(int mathScore, int physicScore, int laoLangScore, int kmeScore)
{
    int totalScore = mathScore + physicScore + laoLangScore + kmeScore;
    printf("Your total score: %d\n", totalScore);

    int avgScore = totalScore / 4;
    printf("Your average score: %d\n", avgScore);

    char grade = calculateGrade(totalScore);
    printf("Your grade: %c\n", grade);
}

char calculateGrade(int totalScore)
{
    if (totalScore >= 90)
    {
        return 'A';
    }
    else if (totalScore >= 80)
    {
        return 'B';
    }
    else if (totalScore >= 70)
    {
        return 'C';
    }
    else if (totalScore >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

void handleError(char firstName[100], char lastName[100], int id, int mathScore, int physicScore, int laoLangScore, int kmeScore)
{
    int errorFlag = 0;

    if (scanf("%s", &firstName) != 1) {
        printf("Invalid input for math score. Please enter a valid String range 1 to 100 Charecter.\n");
        errorFlag = 1;
    }
    
    if (scanf("%s", &lastName) != 1) {
        printf("Invalid input for math score. Please enter a valid String range 1 to 100 Charecter.\n");
        errorFlag = 1;
    }

    if (scanf("%d", &id) != 1) {
        printf("Invalid input for math score. Please enter a valid integer.\n");
        errorFlag = 1;
    }

    if (scanf("%d", &mathScore) != 1) {
        printf("Invalid input for math score. Please enter a valid integer.\n");
        errorFlag = 1;
    }

    if (scanf("%d", &physicScore) != 1) {
        printf("Invalid input for physics score. Please enter a valid integer.\n");
        errorFlag = 1;
    }

    if (scanf("%d", &laoLangScore) != 1) {
        printf("Invalid input for Lao language score. Please enter a valid integer.\n");
        errorFlag = 1;
    }

    if (scanf("%d", &kmeScore) != 1) {
        printf("Invalid input for kme score. Please enter a valid integer.\n");
        errorFlag = 1;
    }

    if (errorFlag) {
        printf("Try Input again and check data type of your variables");
    }

    if (mathScore < 0 || mathScore > 20 ||
        physicScore < 0 || physicScore > 20 ||
        laoLangScore < 0 || laoLangScore > 20 ||
        kmeScore < 0 || kmeScore > 20)
    {
        printf("Your score should be between 0 and 20. Please input a new score.\n");
    }
}
