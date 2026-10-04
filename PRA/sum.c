#include<stdio.h>

int add(int *p,int n){
    if(n==0){
        return 0;
    }
    return *p+add(p+1,n-1);

}
int main(){
    int a[]={22,3,44,55,4,33};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=add(a,n);
    printf("%d",sum);
}