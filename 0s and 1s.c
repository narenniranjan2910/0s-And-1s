#include <stdio.h>

int main() {
    int choice;

    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 0:
            printf("Good Work");
            break;

        case 1:
            printf("Good Work");
            break;

        default:
            printf("Use the Default Case");
    }

    return 0;
}
