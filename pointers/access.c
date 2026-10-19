#include<stdio.h>

void *access(int a[],int len){
    return &a[7];

}
int main(){
    int a[]={2,3,4,45,6,4,33,2,2,76};
    int len=sizeof(a)/sizeof(a[0]);
    int *e=access(a,len);
    printf("%d",*e);
}