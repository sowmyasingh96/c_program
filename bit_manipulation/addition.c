#include<stdio.h>

void main(){
    int a=3,b=5;
    int c;
    while(b!=0){
        c=a&b;
        a=a^b;
        b=c<<1;
    }
    printf("%d",a);
}