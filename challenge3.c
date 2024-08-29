#include <stdio.h>

int main() {
    double width, height, area, perimeter;
    int units = 0;
    const char *char_units;

    printf("Welcome to the Rectangle area and perimeter calculator!\n");
    printf("Please enter the width of the rectangle: \n");
    scanf("%lf", &width);
    printf("Please enter the height of the rectangle: \n");
    scanf("%lf", &height);

    while (units < 1 || units > 4) {
        printf("What units is the rectangle in? (1: cm, 2: m, 3: inches, 4: feet): ");
        scanf("%d", &units);
        if (units == 1) {
            char_units = "cm";
        } else if (units == 2) {
            char_units = "m";
        } else if (units == 3) {
            char_units = "\"";
        } else if (units == 4) {
            char_units = "\'";
        } else {
            printf("Invalid entry. Please choose a number between 1 and 4.\n");
            units = 0;
        }
    }
    area = width * height;
    perimeter = (2 * width) + (2 * height);
    printf("The rectangle's area is %.2lf%s^2 and perimeter is %.2lf%s.\n", area, char_units, perimeter, char_units);
    return 0;
}