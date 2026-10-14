#include<stdio.h>

typedef struct A{
    int roll;
    char name[20];
    float per;
}x;


void main(){
    x s={24,"sowmya",98.34};
    printf("%d %s %.3f\n",s.roll,
    s.name,
s.per);
    printf("%zu\n",sizeof(int));
    printf("%zu\n",sizeof(char));
    printf("%zu\n",sizeof(float));
    printf("%zu",sizeof(struct A));
}