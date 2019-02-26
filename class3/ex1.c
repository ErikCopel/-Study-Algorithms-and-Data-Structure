#include <stdio.h>
#include <stdlib.h>

struct students{
    int ra;
    double score;
    char name[100];
};
typedef struct students students;

double average(students *p, int n);
int bestStudent(students *student, int n);

int main(int argc, char const *argv[])
{
    int n = 0;
    int i = 0;

    printf("Number of students: ");
    scanf("%d", &n);
    
    students *student = malloc(n * sizeof(students));

    for(i = 0; i < n; i++){
        printf("\nInput student %d name: ", i);
        scanf("%s", student[i].name);
        printf("\nInput student %d ra: ", i);
        scanf("%d", &student[i].ra);
        printf("\nInput student %d score: ", i);
        scanf("%lf", &student[i].score);
    }
    printf("\nAverage score: %lf",average(student, n));

    free(student);
    return 0;
}

double average(students *student, int n){
    int i = 0;
    double result = 0;

    for(i = 0; i < n; i++){
        result += student[i].score;
    }
    return result/n;
}

/*
unfinished
*/
int bestStudent(students *student, int n){
}
