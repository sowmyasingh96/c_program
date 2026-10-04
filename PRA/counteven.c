#include<stdio.h>

int even(int *p,int n){
    if(n==0){
        return 0;
    }
    int e=even(p+1,n-1);
    if((*p%2)==0){
        return e+1;
    }
    return e;
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int e=even(a,n);
    printf("%d",e);
}