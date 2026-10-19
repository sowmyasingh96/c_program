#include<stdio.h>

void acc(int a[],int *p){
    printf("%d\n",*(p++)); 
    printf("%d\n",*p); 
    printf("%d\n",*(p--));
    printf("%d\n",*p);
}
int main(){
    int a[]={1,2,3,4,4,5,6,7,6};
    acc(a,&a[2]);
   
    
}