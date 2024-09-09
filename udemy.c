#include <stdio.h>
#include <stdbool.h> 
int main(int argc, char *argv[]) {

    // int numberOfArguments = argc;
    // char *argument1 = argv[0];
    // char *argument2 = argv[1];
    // printf("Number of Arguments: %d\n", numberOfArguments);
    // printf("Argument 1 is the program name: %s\n", argument1);
    // printf("Argument 2 is the program name: %s\n", argument2);
    int a = 33;
    int b = 15;
    int result = 0;

    result = a % b;
    printf("%d", result);
    return 0;
}