/* Write a C program that takes two strings as input and concatenates them using the strcat() function. Print the resulting string. */

#include <stdio.h>
#include <string.h>

int main() {
    char x[100], y[100], store[200] = ""; // Initialize store with an empty string

    printf("Enter 1st string: ");
    scanf("%s", x);

    printf("Enter 2nd string: ");
    scanf("%s", y);

    strcat(store, x); // Concatenate x to store
    strcat(store, y); // Concatenate y to store

    printf("%s", store);

    return 0;
}