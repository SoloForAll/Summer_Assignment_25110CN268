// Program to find LCM of two numbers

#include <stdio.h>

int main() {
    int a, b, max;
    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Finding greater number
    if(a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    // Finding LCM
    while(1) {
        if(max % a == 0 && max % b == 0)
        {
            printf("LCM = %d", max);
            break;
        }
        max++;
    }
    return 0;
}
