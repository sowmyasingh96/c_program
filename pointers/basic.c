#include<stdio.h>

void point(int *p){
    printf("%d",*p);
}
int main(){
    int a=10;
    point(&a);
}