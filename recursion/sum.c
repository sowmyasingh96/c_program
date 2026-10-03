// Online C compiler (editor)
// Write and run C online using this editor.
#include<stdio.h>

int num(int n){
    if(n==0)
        return  0;
    else
        return n+num(n-1);
}
int main(){
    printf("%d",num(5));
}