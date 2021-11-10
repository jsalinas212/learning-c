#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int max(int num1, int num2, int num3) {

    int result;

    if(num1 >= num2 && num1 >= num3) { // if true then return num1. if false, check num2.
        result = num1;
    } else if(num2 >= num1 && num2 >= num3) { // check num2 and return, or num3 is bigger.
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

struct Person{
    char nameO[50];
    char major[50];
    int age;
    double gpa;
};



int spanky(int dumbStuff) { // Functions that return stuff need to be called above main.

    return pow(6, 3);
    
} // You can specify prototypes above main allowing functions to exist below main.


void funky() { // Void. Point of no return.

    printf("Funky function\n");
    int num1;
    int num2;
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("You need another number: ");
    scanf("%d", &num2);

    printf("Answer: %d\n", num1 * num2); // Answer is num1 times num2

}

void garbage() { // Void. Point of no return.

    char color[20];
    char noun[20];
    char celebrity[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a noun: ");
    scanf("%s", noun);
    printf("Enter the name of a celeb: ");
    scanf("%s", celebrity); // Use two variables for fname and lname to avoid the use of spaces.

    printf("Roses are red\n");
    printf("Violets are blue\n");
    printf("Next is a madlib\n");
    printf("%s\n%s\n%s\n", noun, color, celebrity); // The program seems to be working well.

}

/*

    Software Compilation
    ---------------------------

    Compilation is the process of translating code into machine code.
    Multi-stage processing.

    Preprocessing: Takes the source code and generates a pre-processed filed. Comments removed and macros replaced. (.i)
    Compilation: Takes preprocessed file as input and spits out assembly. (.s)
    Assembly: Converts assembly into object code. (.o, obj)
    Linking: Final stage. Takes static libraries and object code and creates an executable.    

*/

int main() {

    char charName[] = "John";
    int charAge = 35;
    int age = 20;
    char name[50];

    printf("Dude's name is %s.\n", charName); // %s can include text or variables
    printf("%s was %d years old.", charName, charAge); // printf can also print numbers, but with format specifier %d
    printf("He liked his name.\n"); // \ for escaping, but you can also new line with \n
    printf("But being %d was crappy.\n", charAge);

    int num = 123; // whole number
    double fart = 3.5; // decimal
    char what = 'f'; // single char
    char thing[] = "blah"; // array of chars

    printf("Bye bye, world...\n"); // single purpose function

    // other format specifiers: %f for doubles, %c for single char

    printf("%f\n", 5.34 * 88.9);
    
    /*  
        functions are blocks of code that do things when we call them. 
        other meth functions:
        pow() takes two args, second number is power of first.
        sqrt() Square Root.
        ciel() round up.
        floor() round down.
     */
    
    // Only use comments when absolutely necessary.

    // const int something; // Constant; Cannot change.

    funky();

    // user input

    int age;
    printf("Why don't we ask the user to enter their age? ");
    scanf("%d", &age); // user input to format you are needing. & is a "pointer";
    printf("You are %d years old.", age);

    /*  
        You can do doubles.
        %lf when using scanf().
        char name[100] limit the number of chars in the array (allocate memory). No ampersands when printing string.
        scanf hates spaces.
     */

    fgets(name, 20, stdin); // Similar to scanf, but only for strangs. Buffer overflows.

    // fgets will also store carriage return.

    int luckyNumbers[] = {4, 1, 6, 3, 7, 3, 123}; // Elements inside of array.

    printf("Answer: %d\n", spanky(23));

    printf("%d\n", max(20, 55, 123));

    struct Person Person1; // Structs are like objects. They contain different data types for stuffs.
    Person1.age = 355;
    Person1.gpa = 1.1;
    strcpy(Person1.nameO, "Pedro"); // Use String Copy to copy string into memory.
    strcpy(Person1.major, "Jones");

    printf("%s is a %s and has a %f GPA and is %d years old\n", Person1.nameO, Person1.major, Person1.gpa, Person1.age);

    int things1[3][2] = { // 2d array things1.
        {1, 2},
        {3, 4},
        {5, 6}
    };
    printf("%d", things1[0][1]);

    int i, j;

    for(i = 0; i < 3; i++) { // Nested loops.
        for(j = 0; j < 2; j++) {
            printf("%d, ", things1[i][j]);
        }
        printf("\n");
    }

    // Good stuff starts here. ¯\_(ツ)_/¯

    printf("%p", &age); // Percent spee to access memory address. This is how C accesses addresses in memory.

    /* 
        Pointer is a type of data like char, int, double, etc.
        Apparently pointers are confusing.
        A pointer is a memory address.
        Ampersand in front of variable name gives you a memory address.
    */

    int *pNum = &age;

    /*
        Storing the memory address of the age int into pNum with asterisk.
        asterisk and pNum for memory address variables.
        De-reference point by using more asterisk.
    */

    printf("%p", *pNum); // De-referenced pNum.

    // You can also de-referenced, re-reference, de-reference, but this isn't particularly useful.

    char line[255]; // Charizard limit 255.

    FILE *fpointer = fopen("employees.txt", "w"); // Fopen file.

    // FILE is a pointer and fpointer is the address of the file.
    // If the file path is not specifed, C dumps it where C program is located.
    // w(write), a(append), r(read).

    fprintf(fpointer, "Gary Host\nTitania Gray\nBobby Heinz"); // Add stuff to file (obviously).

    fclose(fpointer); // Close the file.

    fgets(line, 255, fpointer); // Getting first line and move pointer pointer file is using fgets.

    // You can define multiple variables in one line.

    int x, y, z;

    return 0; // not returning data

}
