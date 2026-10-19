#include <stdio.h>

void fun(int *p,int *q ){
    *p=10;
    *q=20;
    
}
int main(){
    int a=30,b=40;
    fun(&a,&b);
    printf("%d %d",a,b);
}
