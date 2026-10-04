#include<stdio.h>

void reverse(char *s){

    int i=0;
    char temp;
     
    while(s[i]!='\0'){
        i++;   
    }
    printf("%d\n",i);
    int l=0,r=i-1;
    while(l<r){
        temp=s[l];
        s[l]=s[r];
        s[r]=temp;
        l++;
        r--;
    }
   
    
}
int main(){
    char s[]="sowmya";
    reverse(s);
  
    
    printf("%s",s);
    
}