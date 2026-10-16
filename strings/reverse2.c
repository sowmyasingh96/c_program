#include<stdio.h>

void rev(char *s){
    int n=0,i,j;
    char temp;
    while(s[n]!='\0'){
        n++;
    }
    for(i=0,j=n-1;i<j;i++,j--){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    printf("%s",s);
}
int main(){
    char s[]="sowmya";
    rev(s);
}