#include <stdio.h>

void factorial(int n) {
    int j = 1;  
    printf("\n");
    for (int i = 1; i <= n; i++) {
        printf("%d * %d = %d\n", j,i, j*i);
        j = j * i; 
    }
    printf("\nFactorial of %d is: %d\n", n, j);  
}

void star_print(int n){
    printf("\nstar design for %d line printing\n", n);
    for (int i=1; i<=n; i++){
        for (int k = n; k>=i;k--){
            printf(" ");
        }
        for (int j =1; j<=i; j++){
        printf(" *");
        }
        printf("\n");
    }
}

void fibonacci(int n){
    printf("\nFibonacci Series for %d limit is: \n", n);
    int i = 1 , j = 0, temp;
    do{
        printf("%d ",i);
        temp = i;    
        i = i + j;
        j = temp;
        n--;
        
    }while(n>0);
}

void rangeprint(int min, int max){
    int i=min;
    printf("\nprinting the number from %d to %d", min, max);
    while(i<=max){
        printf("%d\n", i);
        i++;
    }
}

int greatestofthreeNumber(int a, int b, int c){
    if (a>b && (b>c || b==c)){
        printf("Value 1: %d is greatest of %d and %d ;", a);
    }
    else if ((a>b || a==b) && a < c){
        printf("Value 3: %d is greatest of %d and %d ;", c);
    }
    else if (a<b && (a>c || a==c)){
        printf("Value 2: %d is greatest of %d and %d ;", b);
    }
    else if (a==b & b==c) {
        printf("All 3 are equal");
    }
    else{
        printf("condition not defined:\natleast one number should be greater than other two\n");
    }

}

void weekday_print(int num){

switch(num) {
    case 1: 
        printf("Number %d belongs to : Monday", num); 
        break;
    case 2: 
        printf("Number %d belongs to : Tuesday", num); 
        break;
    case 3: 
        printf("Number %d belongs to : Wednesday", num); 
        break;
    case 4: 
        printf("Number %d belongs to : Thursday", num); 
        break;
    case 5: 
        printf("Number %d belongs to : Friday", num); 
        break;
    case 6: 
        printf("Number %d belongs to : Not a Weekday", num); 
        break;
    case 7: 
        printf("Number %d belongs to : Not a Weekday", num); 
        break;
    case 8: 
        printf("Exiting......"); 
        break;
    default: 
        printf("Not a valid Weekday"); 
}

}

int main() {

    printf("hello welcome to C\n");  

    int num;
    printf("Enter the factorial number : ");
    scanf("%d",&num);

    factorial(num);
    printf("\n");

    printf("Enter the star design line number : ");
    scanf("%d",&num);
    star_print(num);
    printf("\n");

    printf("Enter the fibonacci series limit : ");
    scanf("%d",&num);
    fibonacci(num);
    printf("\n");

    printf("Enter the range of value to print: \n");
    int min, max;
    printf("min range: ");
    scanf("%d", &min);
    printf("max range: ");
    scanf("%d", &max);
    rangeprint(min,max);
    printf("\n");

    // greatest of 3 numbers
    printf("Enter 3 number to find the greatest of 3 values\n");
    int a,b,c;
    printf("enter value 1: ");
    scanf("%d",&a);
    printf("enter value 2: ");
    scanf("%d",&b);
    printf("enter value 3: ");
    scanf("%d",&c);
    greatestofthreeNumber(a,b,c);
    printf("\n");

    printf("Find the Weekday\n");
    printf("enter the weekday: ");
    scanf("%d",&num);
    weekday_print(num);
    return 0;
}


/*
print i values varying from 1 to 10
get 3 inputs, find the greatest of 3
get weekday as input
print respectinve day
input as numeric

factorial
fibonacci
get inputs for all kinds of data types
char, float, string...
print all those values
pre, post inclrements/decrements

sum of digits of a number
1234
1+2+3+4 =10
*/