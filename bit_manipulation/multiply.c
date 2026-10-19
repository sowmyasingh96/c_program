#include<stdio.h>

void main(){
    int i,s;
    for(i=1;i<=10;i++){
        s=(i<<4)-(i<<0);
    printf("%d\n",s);
    }
    
}


// Multiply by	Shift form
// 15	(i << 4) - i
// 10	(i << 3) + (i << 1)
// 7	(i << 3) - i
// 9	(i << 3) + i
// 12	(i << 3) + (i << 2)