#include<stdio.h>

void sub(int a[],int *p){
    printf("%d\n", *(p-1));
    printf("%d\n",*p+1);
    printf("%d\n",*(p+1));
}
int main(){
    int a[]={1,22,33,44,55,66};
    sub(a,&a[2]);

}