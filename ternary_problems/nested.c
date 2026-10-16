#include<stdio.h>

void main(){
    int a=75;
    int b=56;
    
    int s=sizeof(a)?(b>23?((a==75)?'A':0):0):0;
    printf("%d",s);
}