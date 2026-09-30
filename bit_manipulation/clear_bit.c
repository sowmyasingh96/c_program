#include<stdio.h>

void set(unsigned int n){
    int count=0;
    while(n>0){
        if(!(n&1))
           count++; 
       
            
         n=n>>1;
    }

   printf("%d",count);
}
int main(){
   
    set(8);
    return 0;
}