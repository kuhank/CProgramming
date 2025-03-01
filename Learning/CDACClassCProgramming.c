#include <stdio.h>
#include <stdlib.h>

float displaydetails(int, char,int);
void f1(int,int);
void f2(int *,int *);


void strlen_c()
{
    char str[] = "Test"; // {‘T’,’e’,’s’,’t’}
    char *p;
    int i;
    for (p = str, i = 0; *p != '\0'; p++, i++)
        ;
    printf(" The length of the string is %d\n", i);
}

void malloc_C()
{

    int *p;
    int n = 4, i;

    printf("\n Enter How many elements : ");
    scanf("%d", &n);
    printf("\n**********************\n");

    p = (int *)malloc(n * sizeof(int)); // typecasting void * to int *
    // Allocates memory dynamically for n integers.
    // malloc(n * sizeof(int)) reserves memory for n integers.
    // (int *) is used to typecast the returned void * to int *.
    // The pointer p stores the address of the allocated memory block

    if (p == NULL)
    {
        fprintf(stderr, "\nFail to alloct memory\n");
        exit(1);
    }

    printf("\n Memory Allocated at : %p ", p);

    for (i = 0; i < n; i++)
        p[i] = i + 1;

    printf("\n");

    for (i = 0; i < n; i++)
        printf("%d ", p[i]);

    printf("\n");

    free(p);
}

void function_c()
{

    int id, marks;
    char g;
    printf("Enter the ID of the Student");
    scanf("%d", &id);
    fflush(stdin);
    printf("enter the grade of the student");
    scanf("%c", &g);
    printf("Enter the marks of the student");
    scanf("%d", &marks);
    float avg = displaydetails(id, g, marks);
    printf("Average marks %f", avg);

}
float displaydetails(int iden, char grade, int marks)
{
    printf("ID : %d\n", grade);
    printf("Grade %c\n", grade);
    printf("marks %d\n", marks);
    float avg = marks / 5;
    return avg;
}
void count(){
    static int i=1;
    printf("function called %d time\n",i++);
}

void static_func(){
    count();
    count();
    count();
    count();
    count();
}

int fact(int x)
{
	if(x==1)
		return 1;
	else
		return x * fact(x-1);
	
}

void callbyRef()
{
int a=100,b=200;
f1(a,b);
printf("%d %d\n",a,b);
int *p1,*p2;
p1=&a; p2=&b;
f2(p1,p2);
printf("%d %d",*p1,*p2);
printf("%d %d",a,b);
}

void f1(int var1,int var2)
{
var1++;var2++;
}

void f2(int *var1,int *var2)
{
(*var1)++;
(*var2)++;
}

void class_20250226()
{
    printf("\n\n===========\nString length function\n============\n");
    strlen_c();
    printf("\n\n===========\nmalloc function\n============\n");
    malloc_C();
    printf("\n\n===========\nfunctions example\n============\n");
    function_c();
    printf("\n\n===========\nstatic variable function\n============\n");
    static_func();
    printf("\n\n===========\nfactorial recursive function\n============\n");
    int i;
    printf("enter the number to identify its factorial\n");
    scanf("%d",&i);
    int x = fact(i);
    printf("\nfactorial of %d is %d",i,x);
    printf("\n\n===========\ncall by reference function\n============\n");
    callbyRef();
}

void main()
{
    class_20250226();
}


/*

p[i] is actually shorthand for *(p + i) = Go to the memory location at p + i and access its value
p[2] = *(p + 2);  // Both are the same
*p[i] would be incorrect because p[i] is already the value
*p[i] is used only if p is a pointer to another pointer (e.g., int **p)

*/

/*
malloc:

malloc dynamically allocates memory and returns a generic void pointer (void *),
    which must be explicitly cast to the appropriate pointer type (in this case, int *).

malloc Returns void *
void *malloc(size_t size);
void *, which is a generic pointer type that can hold the address of any data type

explicit typecast ((int *)) tells the compiler that we are treating the memory as an array of integers.


p = malloc(n * sizeof(int));  // Works, but gives a warning (implicit conversion)
int *p;
p = malloc(n * sizeof(int));  // ❌ ERROR in C++


*/


/*

Why is a Function Prototype Required in C?
In C, a function prototype (declaration) is required if a function is used before it is defined. 
This helps the compiler understand the function’s return type and parameter types 
    before encountering its definition.

If you call a function before defining it, the compiler implicitly assumes it returns an int

A function prototype tells the compiler in advance:
    The return type of the function.
    The number and types of parameters.
    Ensures type safety and prevents implicit declaration errors.

*/