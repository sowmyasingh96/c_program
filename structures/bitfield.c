#include<stdio.h>

struct s {
    int a : 2;
    int b : 6;
    int c : 22;

};
void main(){
    printf("%zu",sizeof(struct s));
}