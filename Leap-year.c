#include <stdio.h>

int main() {
    int y;
    
    if (scanf("%d", &y) != 1) {
        printf("INVALID\n");
        return 0;
    }

    if (y <= 0) {
        printf("The given year %d is Invalid year.\n", y);
    } 
    else if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        printf("Yes, %d is a leap year.\n", y);
    } 
    else {
        printf("No, %d is not a leap year.\n", y);
    }
    
    return 0;
}
