#include<stdio.h>

int power(int n,int p){
    if(p==0){
        return 1;}
    else{
        return n*power(n,p-1);}
}
int main(){
   
     printf("%d\n",power(2,3));
     printf("%d\n",power(4,6));
     printf("%d\n",power(5,8));
}