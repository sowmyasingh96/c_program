#include<stdio.h>

void nontail(int n){
    if(n==0){
        return;
    }
    nontail(n-1);
    printf("%d ",n);
    
}
int main(){
    int n=3;
    nontail(n);
}