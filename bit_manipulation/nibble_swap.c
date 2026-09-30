#include<stdio.h>

void nibble(unsigned int n){
     unsigned int s=(n<<4|n>>4);

    printf("0x%X",s & 0xFF);
}
int main(){
    nibble(0xAB);
    return 0;
}