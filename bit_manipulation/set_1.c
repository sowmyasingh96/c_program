#include<stdio.h>

int set_bits(unsigned int n){
    int count=0;
    while(n>0){
       if(n&1){
        count++;
       }
       n=n>>1;
    }
    return count;
}
int main(){
    
    printf("%d",set_bits(78));
    return 0;
}