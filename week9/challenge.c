#include <stdio.h>
struct Student {
    char name[50];
    int grade;
};
void grade(struct Student st[], int n);
int main(){
    int n;
    float avg=0;
    struct Student st[100];
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("Enter name of student %d: ",i+1);
        scanf("%s",st[i].name);
        printf("Enter grade of %s: ",st[i].name);
        scanf("%d",&st[i].grade);
    }
    int highest = st[0].grade;
    int lowest = st[0].grade;
    int highIndex = 0;
    int lowIndex = 0;
    for(int i = 0;i<n;i++){
        avg=avg+st[i].grade;
        if (st[i].grade > highest){
            highest = st[i].grade;
            highIndex = i;
        }
        if (st[i].grade < lowest){
            lowest = st[i].grade;
            lowIndex = i;
        }
    }    
    avg=avg/n;
    printf("--- Results ---\n");
    printf("Average grade: %.2f\n",avg);
    printf("Highest grade: %d (%s)\n", highest, st[highIndex].name);
    printf("Lowest grade: %d (%s)\n", lowest, st[lowIndex].name);
    grade(st, n);
}
void grade(struct Student st[], int n){
    printf("Students who passed:\n");
    for (int i = 0; i < n; i++) {
        if (st[i].grade >= 60){
            if (st[i].grade >= 80){
                printf("%s - Grade A\n", st[i].name);
            }
            else if (st[i].grade >= 70){
                printf("%s - Grade B\n", st[i].name);
            }
            else{
                printf("%s - Grade C\n", st[i].name);
            }
        }
    }
}