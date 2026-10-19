#include<stdio.h>

void *mid(int a[],int len){
   return &a[len/2];
}
int main(){
    int a[]={1,2,3,4,5,5,6,7,8};
     int len=sizeof(a)/sizeof(a[0]);
    int *m=mid(a,len);
   
   
    printf("%d",*m);

}