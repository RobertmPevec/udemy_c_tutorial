#include <stdio.h>
int main() {
    int minutes = 0;
    int total_years = 0;
    int total_days = 0;
    int days = 1440;
    int years = 525600;
    printf("Convert minutes to years and days!\n");
    printf("How many minutes would you like to convert?\n");
    scanf("%d", &minutes);
    total_years = minutes / years;
    minutes = minutes - (total_years * years);
    total_days = minutes / days;
    minutes = minutes - (total_days * days);
    printf("This is = to %d years, %d days and a remainder of %d minutes", total_years, total_days, minutes);
    return 0;
}