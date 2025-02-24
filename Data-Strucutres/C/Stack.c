#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 5

int main() {
    int item, choice, i;
    int arr_stack[MAX_SIZE];
    int top = 0;
    int exit = 1;

    printf("\nthis is a c program for stack operation");
    printf("\nSimple Stack Example - Array");
    do {
        printf("\n\nnStack Main Menu");

        printf("\n1.Push \n2.Pop \n3.Display \nOthers to exit");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (top == MAX_SIZE)
                    printf("\n## Stack is Full!");
                else {
                    printf("\nEnter The Value to be pushed : ");
                    scanf("%d", &item);
                    printf("\n## Position : %d , Pushed Value  : %d ", top, item);
                    arr_stack[top++] = item;
                }
                break;
            case 2:
                if (top == 0)
                    printf("\n## Stack is Empty!");
                else {
                    --top;
                    printf("\n## Position : %d , Popped Value  : %d ", top, arr_stack[top]);
                }
                break;
            case 3:
                printf("\n## Stack Size : %d ", top);
                for (i = (top - 1); i >= 0; i--)
                    printf("\n## Position : %d , Value  : %d ", i, arr_stack[i]);
                break;
            default:
                exit = 0;
                break;
        }
    } while (exit);

    return 0;
}