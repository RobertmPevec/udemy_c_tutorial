#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "John";
    int  characterAge = 35;
    double gpa = 3.3;
    // only use [] when wanting to initialize an array
    // to use a quotation mark but a baclslash: \""
    printf("Hello, my name is %s\n", characterName);
    printf("I am %d years old\n", characterAge);
    printf("my gpa at Harvard University is %f\n", gpa);
    printf("%d and %s or\n " , 500, "Dates");
    printf("%f", 69.0 + 420.0);
    return 0;
}