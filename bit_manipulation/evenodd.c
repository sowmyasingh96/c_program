#include<stdio.h>

int eo(int n){
    if(n&1)
        return 1;
    else
        return 0;

}
int main(){
    int result=eo(3);
    if(result==1)
        printf("odd");
    else
        printf("even");
    return 0;
}