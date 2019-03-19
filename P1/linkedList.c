#include <stdio.h>

typedef struct student{
    char name[100];
    int score;
    struct student *next;
} student;

void printList(student *p);

int main(int argc, char const *argv[])
{
    student joao;
    student maria;
    student luiza;

    sprintf(joao.name, "joao");
    sprintf(maria.name, "maria");
    sprintf(luiza.name, "luiza");

    joao.score = 5;
    maria.score = 7;
    luiza.score = 9;

    joao.next = &maria;
    maria.next = &luiza;
    luiza.next = NULL;

    printList(&joao);
    return 0;
}

void printList(student *p){
    student *head = p;

    while(head != NULL){
        printf("Student: %s\nScore: %d\n\n", head->name, head->score);
        head = head->next;
    }
}
