// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int choice;
    printf("enter choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tue");
            break;
        case 3:
        printf("wed");
        break;
        
        default:
            printf("sunday");

}
}