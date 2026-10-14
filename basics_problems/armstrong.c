#include<stdio.h>

void main()
{
    int n,i,d,a;
    for(n=0;n<1000;n++){
        d=0;
        a=0;
        int temp=n;
        while(temp>0){
            d=temp%10;
            a+=d*d*d;
            temp=temp/10;  
    }
       

     if(n==a){
            printf("%d ",n);
        }
    }
}