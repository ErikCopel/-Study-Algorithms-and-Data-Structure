#include <stdio.h>

typedef struct {
    char name[100];
    int score;
} student;

int main(){
    student joao;

    sprintf(joao.name, "joao");
    joao.score = 7;
    printf("Student: %s\nScore: %i\n", joao.name, joao.score);

}

