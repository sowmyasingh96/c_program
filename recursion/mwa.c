#include<stdio.h>

int mul(int a,int b){
    if(b==0){
        return 0;
    }
    else{
        return a+mul(a,b-1);
    }
}
int main(){
    printf("%d\n",mul(4,3));
    printf("%d\n",mul(3,6));
    printf("%d\n",mul(7,9));
    printf("%d\n",mul(10,3));
}