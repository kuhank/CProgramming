#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check if a number is odd or even
int isEven(int num) {
    return num % 2 == 0;
}

// Function to print table of a number
void printTable(int num) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Function to display sizes of primitive data types
void displaySizes() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
}

// Function to demonstrate bitwise operators with user input
void bitwiseOperatorsDemo() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT of first number: %d\n", ~a);
    printf("Left Shift first number by 1: %d\n", a << 1);
    printf("Right Shift first number by 1: %d\n", a >> 1);
}

// Function to find greatest of three numbers using conditional operator
void greatestOfThree(int a, int b, int c) {
    int greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The greatest number is: %d\n", greatest);
}

// Function to demonstrate nested loops
void nestedLoopsDemo() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num, choice, a, b, c;
    
    do {
        printf("\nMenu:\n");
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Print table of a number\n");
        printf("5. Display sizes of all primitive data types\n");
        printf("6. Bitwise operators demonstration\n");
        printf("7. Find the greatest of three numbers\n");
        printf("8. Nested loops demonstration\n");
        printf("9. Check if a number is palindrome\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d is %d\n", num, factorial(num));
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num)) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is not a prime number.\n", num);
                }
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isEven(num)) {
                    printf("%d is an even number.\n", num);
                } else {
                    printf("%d is an odd number.\n", num);
                }
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);
                printTable(num);
                break;
            case 5:
                displaySizes();
                break;
            case 6:
                bitwiseOperatorsDemo();
                break;
            case 7:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);
                greatestOfThree(a, b, c);
                break;
            case 8:
                nestedLoopsDemo();
                break;
            case 9:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPalindrome(num)) {
                    printf("%d is a palindrome number.\n", num);
                } else {
                    printf("%d is not a palindrome number.\n", num);
                }
                break;
            case 10:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 10);
    
    return 0;
}
