#include<stdio.h>
int factorial(int n){
    int fact,i;
    fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;  
    }
    return fact;  

}
void main(){
    
    int result=factorial(5);
    printf("%d",result);
    
    
}