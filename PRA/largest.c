#include<stdio.h>

int largest(int *p,int n){
    if(n==1){
        return *p;
    }
    int rest= largest(p+1,n-1);
    return (*p>rest)? *p:rest;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int l=largest(a,n);
    printf("%d",l);
    
}