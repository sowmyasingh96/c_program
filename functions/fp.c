#include<stdio.h>

void point(int *p){
    *p=20;
}
int main(){
   int a=10;
   point(&a);
   printf("%d",a);
}