#include <stdio.h>

int main() {
    int i, j;
    struct Student {
        char name[50];
        int id;
        int g[4];
        float avg;
    } st[3];
    const char *subjectNames[4] = {"Math", "English", "Science", "History"};
    for (i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%49s %d %d %d %d %d", st[i].name, &st[i].id, &st[i].g[0], &st[i].g[1], &st[i].g[2], &st[i].g[3]);
        
        int sum = 0;
        for (j = 0; j < 4; j++) {
            sum += st[i].g[j];
        }
        st[i].avg = sum / 4.0;
        printf("\n");
    }
    int topStudentIdx = 0;
    printf("Student Averages:\n");
    for (i = 0; i < 3; i++) {
        printf("%s (ID: %d): %.2f\n", st[i].name, st[i].id, st[i].avg);
        if (st[i].avg > st[topStudentIdx].avg) {
            topStudentIdx = i;
        }
    }
    printf("\nTop Student: %s with %.2f\n", st[topStudentIdx].name, st[topStudentIdx].avg);
    float subjectAverages[4];
    int topSubjIdx = 0;
    printf("\nSubject Averages:\n");
    for (j = 0; j < 4; j++) {
        int totalSubjectScore = 0;
        for (i = 0; i < 3; i++) {
            totalSubjectScore += st[i].g[j];
        }
        subjectAverages[j] = totalSubjectScore / 3.0;
        printf("%s: %.2f\n", subjectNames[j], subjectAverages[j]);
        if (subjectAverages[j] > subjectAverages[topSubjIdx]) {
            topSubjIdx = j;
        }
    }
    printf("Top Subject Average: %s with average %.2f\n", subjectNames[topSubjIdx], subjectAverages[topSubjIdx]);

    return 0;
}