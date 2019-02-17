/*  Read a list of int and output how many of these numbers are power of 2 
    Input: list length ENTER n1 ENTER n2 ENTER n3...*/

#include <stdio.h>

int isPow2(int x);

int main(int argc, char const *argv[])
{
    int length = 0, x = 0, result = 0;

    scanf("%d", &length);
    for(length; length>0; length--){
        scanf("%d", &x);
        result = result + isPow2(x);
    }

    printf("There is %d numbers that is power of 2\n", result);
    return 0;
}

/* Checks if x is power of 2*/
int isPow2(int x){
    int temp = x%2;

    if(temp!=0 && x==1) return 1;
    else if(temp==0 && x>1) isPow2(x/2);
    else if(x<1) return 0;
    else return 0;
}