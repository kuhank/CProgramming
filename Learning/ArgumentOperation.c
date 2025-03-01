#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[])
{ // error: ‘main’ takes only zero or two arguments

    // NOT need to manually assign argc; it is set by the OS when the program starts.
    // It always includes the program name (argv[0]) as the first argument.
    // If no extra arguments are given, argc is 1 (argv[0] only).
    // main, argc and argv[] always go together - argc to determine how many arguments exist

    printf("\n");
    printf("argument argc is : %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("Word argv[%d] is : %s\n", i, argv[i]);
    }
    printf("\n");

    printf("copying first 4 word using Strcpy and strncpy\n");

    char name[5];
    // only has space for 5 characters (including \0).
    // If argv[1] is longer than 4 characters, strcpy() will overflow

    strncpy(name, argv[1], sizeof(name) - 1); // to avoid overflow
    name[sizeof(name) - 1] = '\0';            // Ensure null termination
    printf("%s\n", name);
}

/* notes

argc (argument count)
It includes the program name (argv[0]) as the first argument.
If no arguments are given, argc is 1 (only the program name is counted).
*/