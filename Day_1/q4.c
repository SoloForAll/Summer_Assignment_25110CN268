// Program to count digits in a number.
#include <stdio.h>
int main() {
    int n, temp, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n; // Store original value
  
    if (n == 0) 
    {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }

    printf("Total digits in %d is %d", temp, count);
    return 0;
}
