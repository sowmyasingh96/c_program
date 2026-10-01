#include<stdio.h>
#include<ctype.h>

void name(const char *str){
    int c=0,k=0,d=0;
    char v[100];
    int vi=0;
    int i=0;;
    char r[100];
    int j=0;
    int u=0,l=0;
    for(i=0;str[i]!='\0';i++){
        c++;
    }
for(i=0;str[i]!='\0';i++){    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
        v[vi]=str[i];
        vi++;
    }
    
else if((str[i]>='a' )&& (str[i]<='z') || (str[i]>='A') && (str[i]<='Z')){
        k++;
}             
else if(str[i]>='0' && str[i]<='9'){
    d++;
}
if(str[i]>='a' && str[i]<='z'){
    l++;
}
else if(str[i]>='A' && str[i]<='Z'){
    u++;
}

}
    v[vi]='\0';
    
    for(i=c-1;i>=0;i--){
        r[j]=str[i];
        j++;
    }
    r[j]='\0';
    
                         
    
    printf("count=%d\n",c);
    printf("vowels=%s\n",v);
    printf("consonauts=%d\n",k);
    printf("lower=%d\n",l);
    printf("upper=%d\n",u);
    printf("reverse=%s",r);
    
    
}
int main(){
    name("SowmRTya123");
    return 0;
   
}