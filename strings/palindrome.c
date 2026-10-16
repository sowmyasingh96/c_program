#include<stdio.h>
#include<string.h>

void pali(char *s){
    int i,j;
    int temp;
    int n=strlen(s);
    for(i=0,j=n-1;j>=0;i++,j--){
            if(j>i){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
        printf("%s",s);
    }

int main(){
    char s[]="sowmya";
    pali(s);
}