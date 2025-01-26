#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Function to check if an integer is a palindrome
bool isPalindrome(int x) {
    // Convert the integer to a string
    char str[50];
    sprintf(str, "%d", x);

    int length = strlen(str);

    // Compare characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int number = get_int("Number: ");
    if (isPalindrome(number)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
