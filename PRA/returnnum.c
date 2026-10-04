#include<stdio.h>

void arr(int *p,int n){
   if(n==0){
       return ;
   }
    printf("%d\n",*p);
arr(p+1,n-1);
}
    
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    arr(a,n);
    
}