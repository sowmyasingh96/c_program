#include<stdio.h>

void summ(int a[],int l,int *p,int *sum){
    int i;
    for(i=0;i<l;i++){
        *sum=*sum+*(p+i);
    }
}
int main(){
    int a[]={1,22,33,4,45,35,21,76};
    int l= sizeof(a)/sizeof(a[0]);
    int sum=0;
    summ(a,l,a,&sum);
    printf("%d",sum);
}