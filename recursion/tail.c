#include<stdio.h>

void tail(int n){
    if(n==0){
        return;
    }
    printf("%d ",n);
    return tail(n-1);
}
int main(){
    int n=3;
    tail(n);
}