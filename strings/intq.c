#include<stdio.h>

int convert(const char *str){
    int i=0;
    int sign=1;
    int result=0;
    while(str[i]==' '){
        i++;
    }
    if(str[i]=='-'){
        sign=-1;
        i++;    
    }
    while(str[i]>='0' && str[i]<='9'){
        result=result*10+(str[i]-'0');
        i++;
    }
    return result*sign;
    
    
}
int main(){
    char my_string[]="   -123 d5v";
    int result=convert(my_string);
    printf("%d",result);
    return 0;
}