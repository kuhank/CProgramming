//C does not have a built-in string type like Python or Java, so we use char, arrays or pointers

#include <stdio.h>
#include<string.h>
void stringOp1()
{
char name[20];

/*

// not advisable 

puts("Enter string");
for(int i=0;i<20;i++)
scanf("%c",&name[i]); //read spaces, newlines, and tabs also
printf("Entered strings is : %s",name);

*/


puts("Enter string - single word (Cannot include space)");

scanf("%19s",name); //stops at space - reads single word
//19 -doesn’t overflow the name array 
// %s stops at spaces
//which stops at spaces and may cause buffer overflows


printf("Entered String is : %s",name);
puts("\nenter the string (can include space)"); //automatically add newline in the end

getchar(); //clear newline from previous input
// if we use previously scanf, it leave /n in the input buffer
//getchar() consume this /n
//fgets() might read the leftover \n instead of waiting for user input.


fgets(name,sizeof(name), stdin); //until a newline (\n) or EOF
name[strcspn(name,"\n")]=0; //remove new line from fgets input
//"string complement span"
//return position of the first occurrence of \n
//0 and \0 are equivalent in C when used in the context of character termination (null character).


printf("Entered String is : %s",name);


}

void String_Exceptions1(){
    int num;
    char name[20];

    printf("Enter a number: ");
    scanf("%d", &num);  // User enters 5 (presses ENTER)

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin); // fgets reads the leftover '\n', NOT the actual input!

}

void twoDCharArray(){
    
    char names[3][10] = {"Alice", "Bob", "Charlie"};

    for (int i = 0; i < 3; i++) {
        printf("names[%d]: %s\n", i, names[i]);
    }

    //alternate

    char name[20][10]; //20 names with each up to 10 characters
    char name2[10],name3[10];
    
    puts("Enter string1");
    for(int i=0;i<2;i++)
    scanf("%s",name[i]);
    
    strcpy(name2,name[0]);
    strcpy(name3,name[1]);
    
    int res=strcmp(name2,name3);
    printf("%d",res);

}

void main(){
    stringOP2();
}


/*
strcpy
strcmp
*/