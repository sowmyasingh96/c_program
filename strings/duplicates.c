#include<stdio.h>

void dup(char *s){
    int flag;
    int k=0;
    int i,j;
    for(i=0;s[i]!='\0';i++){
        flag=0;
        for(j=0;j<k;j++){
            if(s[i]==s[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            s[k]=s[i];
            k++;
        }

    }
    s[k]='\0';
}
int main(){
    char s[]="eemmbbedded";
    dup(s);
    printf("%s",s);
    return 0;
}