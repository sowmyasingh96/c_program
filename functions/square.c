#include<stdio.h>

int square(int x){
    return x*x;
}
void main(){
    int result=square(4);
    printf("%d\n",result);
    int s=square(6);
    printf("%d\n",s);
}