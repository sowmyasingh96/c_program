#include<stdio.h>

void main(){
    int i,n;
    int count;
    for(n=0;n<1000;n++){
        count=0;
        for(i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
           
}
         if(count==2){
            printf("%d ",n);}
        
    }
    
    

}