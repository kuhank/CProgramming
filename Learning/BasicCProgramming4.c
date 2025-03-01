#include <stdio.h>

// Library functions vs User-defined functions
// Library functions are predefined (e.g., printf, scanf, sqrt)
// User-defined functions are created by the programmer

// 1. No argument, No return type
void greet() {
    printf("Hello! This is a function with no arguments and no return type.\n");
}

// 2. No argument, Return type
int getNumber() {
    return 42;
}

// 3. Passing arguments, No return type
void displayNumber(int num) {
    printf("The number is: %d\n", num);
}

// 4. Call by Value vs Call by Reference
void callByValue(int a) {
    a = 20;
}

void callByReference(int *b) {
    *b = 20;
}

// 5. Calculate area of square and rectangle
int square_area(int len) {
    return len * len;
}

int rect_area(int len, int bre) {
    return len * bre;
}

// 6. Fibonacci series using recursion
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 7. Inline function equivalent in C (macro)
#define SQUARE(x) ((x) * (x))

// 8. Function prototype importance
int add(int, int);

// 9. Addition of two numbers by passing arguments and returning sum
int add(int a, int b) {
    return a + b;
}

// 10. Factorial using recursion
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// 11. Storage classes demonstration
void storage_class_demo() {
    auto int autoVar = 10;
    static int staticVar = 5;
    register int registerVar = 2;
    extern int externVar;
    printf("Auto: %d, Static: %d, Register: %d, Extern: %d\n", autoVar, staticVar, registerVar, externVar);
    staticVar++;
}

// Demonstration of register and auto variables
void register_auto_demo() {
    auto int a = 5; // Automatically stored in stack memory
    register int b = 10; // Suggested to store in CPU register
    printf("Auto variable: %d\n", a);
    printf("Register variable: %d\n", b);
    
    // Demonstrating & (address-of) operator restriction on register variable
    // Uncommenting the below line will cause an error
    // printf("Address of register variable: %p\n", &b); 
}

// External linkage variable
int externVar = 50; 

// External linkage function declaration
extern void externalFunction();

// Inline function usage in C
void inline test__inline__func1(int, int);
int inline test__inline__func2(int);

void inline test__inline__func1(int a, int b) {
    //printf("a=%d and b=%d\n", a, b);
    // warning: 'printf' is static but used in inline function 'test__inline__func1' which is not static

}

int inline test__inline__func2(int x) {
    return x * x;
}

// Pointer to an array function
void printArrayUsingPointer(int *p, int size) {
    printf("\nArray Elements using pointer:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

// Array declaration, initialization, and reading values
void arrayOperations() {
    int arr[10], sum = 0;
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of entered numbers: %d\n", sum);
}

// Sum of diagonal elements of a matrix
int diagonalSum(int matrix[3][3]) {
    int sum = 0;
    for(int i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

// Matrix multiplication
void matrixMultiplication(int A[3][3], int B[3][3], int result[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    // Function 1
    greet();
    
    // Function 2
    int num = getNumber();
    printf("Returned Number: %d\n", num);
    
    // Function 3
    displayNumber(10);
    
    // Call by Value vs Call by Reference
    int a = 10, b = 10;
    callByValue(a);
    callByReference(&b);
    printf("After Call by Value: %d\n", a);
    printf("After Call by Reference: %d\n", b);
    
    // Function 5: Square and Rectangle Area Calculation
    int len = 4, bre = 5;
    printf("Square Area: %d\n", square_area(len));
    printf("Rectangle Area: %d\n", rect_area(len, bre));

    // Function 6: Fibonacci Series using Recursion
    printf("Fibonacci Series:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    // Function 7: Inline function usage
    printf("Square using Macro: %d\n", SQUARE(5));

    // Function 8: Addition of two numbers using function
    printf("Addition Result: %d\n", add(10, 20));

    // Function 9: Factorial using Recursion
    printf("Factorial of 5: %d\n", factorial(5));

    // Function 10: Storage Classes Demo
    storage_class_demo();

    // Function 11: Demonstration of register and auto variables
    register_auto_demo();

    // Function 12: External Function Call
    externalFunction();


    // Function 14: Pointer to an Array Demonstration
    int arr[] = {1, 2, 3, 4, 5};
    printArrayUsingPointer(arr, 5);


    // Array operations
    arrayOperations();
    
    // Matrix operations
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Diagonal Sum: %d\n", diagonalSum(matrix));
    
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, B[3][3] = {{9,8,7},{6,5,4},{3,2,1}}, result[3][3];
    matrixMultiplication(A, B, result);
    printf("Matrix Multiplication Result:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


/* notes

fibonacci(5) = fibonacci(4) + fibonacci(3)
fibonacci(4) = fibonacci(3) + fibonacci(2)
fibonacci(3) = fibonacci(2) + fibonacci(1)
fibonacci(2) = fibonacci(1) + fibonacci(0)
fibonacci(1) = 1
fibonacci(0) = 0

fibonacci(2) = 1 + 0 = 1
fibonacci(3) = 1 + 1 = 2
fibonacci(4) = 2 + 1 = 3
fibonacci(5) = 3 + 2 = 5

*/