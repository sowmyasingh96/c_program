#include<stdio.h>

int value(float a){
    return (int)a;
}
int main(){
    printf("%d",value(5.6));
}