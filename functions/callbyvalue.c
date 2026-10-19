#include<stdio.h>

void call(int p){
    p=20;
    
}
int main(){
    int a=10;
    call(a);
    printf("%d",a);
}