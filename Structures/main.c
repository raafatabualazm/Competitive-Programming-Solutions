#include <stdio.h>
#include <stdlib.h>
#define NUM_STUDENTS 20
typedef struct
{
    char name[30];
    int StudentID;
    int score;
    char Grade;

} StudentData;

void Read(StudentData students[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter StudentID: ");
        scanf("%d", &students[i].StudentID);
        printf("Enter Student name: ");
        scanf("%d", students[i].name);
        printf("Enter Student score: ");
        scanf("%d", &students[i].score);
    }
}

void CountGrade(StudentData students[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if(students[i].score >= 90) students[i].Grade = 'A';
        else if(students[i].score >= 80) students[i].Grade = 'B';
        else if(students[i].score >= 65) students[i].Grade = 'C';
        else if(students[i].score >= 50) students[i].Grade = 'D';
        else students[i].Grade = 'F';
    }
}

typedef int* pt;

int main()
{
    StudentData students[NUM_STUDENTS];
    Read(students);
    CountGrade(students);
    return 0;
}
