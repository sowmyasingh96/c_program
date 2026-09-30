#include<stdio.h>

void third(int n){
    if((n>>3)&1)
     printf("yes");
    else
    printf("no");

}
int main(){
    third(1);
    return 0;
}