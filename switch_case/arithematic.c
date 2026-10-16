// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int choice;
    int a=5,b=9;
    printf("enter choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("%d",a+b);
            break;
        case 2:
            printf("%d",a-b);
            break;
        case 3:
        printf("%d",a*b);
        break;
        
        default:
            printf("0");

}
}