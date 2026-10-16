#include<stdio.h>

void palin(int n){
    int d=0,r=0;
    int temp=n;
    while(temp!=0){
        d=temp%10;
        r=r*10+d;
        temp=temp/10;
    }
  
    printf("%d\n",r);
      if(n==r){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
   
}
int main(){
   //  printf("%d\n",palin(121));
   //  int n=121;
   // int r=palin(n);
    
   //     if(n==r){
   //      printf("palindrome");
   //  }
   //  else{
   //      printf("not palindrome");
   //  }
   palin(1231);

}