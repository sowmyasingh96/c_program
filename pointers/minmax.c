#include<stdio.h>

void point(int a[],int len,int *min,int *max){
    int i;
    *min=a[0];
    *max=a[0];
    for(i=0;i<len;i++){
         if(a[i]<*min){
             *min=a[i];         
            }
        if(a[i]>*max){
            *max=a[i];
        }
}
    

}
int main(){
    int a[]={1,22,44,2,11,33};
    int len=sizeof(a)/sizeof(a[0]);
    int min,max;
    point(a,len,&min,&max);
    printf("%d %d",min,max);
}