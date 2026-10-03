#include<stdio.h>

int num(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*num(n-1);
    }
}
int main(){
    printf("%d",num(9));
}