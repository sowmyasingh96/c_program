#include<stdio.h>

void main(){
    int i;
    int arr[5];
    int n;
    int l=arr[0];
    printf("enter n:");
    scanf("%d",&n);
    printf("enter numbers: ");
    for(i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
  for(i=0;i<n;i++){
    
    if(arr[i]>l){
        l=arr[i];
    }
      
  }
    printf("largest=%d",l);
    
}
 
