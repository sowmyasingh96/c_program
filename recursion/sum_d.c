// Online C compiler (editor)
// Write and run C online using this editor.
#include<stdio.h>

int num(int n){
    if(n==0)
        return  0;
    else
        return n%10+num(n/10);
}
int main(){
    printf("%d",num(1234));
}