#include<stdio.h>

typedef struct student{
    int roll;
    char name[20];
    float per;
}x;

void main(){
    x s={24,"sowmya",98.34};
    printf("%d %s %.2f",s.roll,
    s.name,
s.per);
}