#include<stdio.h>
#include<stdbool.h>

/*

sscanf():

syntax : sscanf(char *str, "<format>", ...);
* char *str => is the string variable (must be initialized).
* "<format>" => "%d" (or) "%d %f %s" => The format string that specifies how to interpret the input.
* "..." => place to store

example: 
#include <stdio.h>

int main() {
    char input[] = "123 45.6 hello";
    int num1;
    float num2;
    char str[10];

    sscanf(input, "%d %f %s", &num1, &num2, str);

    printf("Parsed values: %d, %f, %s\n", num1, num2, str);

    return 0;
}
EXPLAINATION : this will sperate the values to integer to num1, float to num2 and string to num3

sscanf() also returns an output which is "number of succesful assignment" if the "%d %d %s" all three done it will return 3 or hence only 1 done it will return 1

* In sscanf, when attempting to convert a value according to a specific format specifier, if it encounters a character that doesn't match the expected type, it will stop processing and return the number of successful assignments made up to that point.

For example, let's say you have the following input string:
    char input[] = "123 abc 45.6";

And you use sscanf with the format specifier "%d %d %f". Here's what will happen:
    * The first %d will successfully convert "123" to an integer.
    * The second %d will encounter the non-integer character "abc," and sscanf will stop processing, returning 1 (the number of successful assignments).
OUTPUT :
    Number of successful assignments: 1
    Parsed values: 123, 0, 0.000000

*/

// IMPLEMENTATION

// int main() {
//     char input[] = "123 45.6 hello";
//     int num1;
//     float num2;
//     char str[10];

//     int successCount = sscanf(input, "%d %f %s", &num1, &num2, str);

//     printf("Number of successful assignments: %d\n", successCount);
//     printf("Parsed values: %d, %f, %s\n", num1, num2, str);

//     return 0;
// }

// /*

// OUTPUT : 
// Number of successful assignments: 3
// Parsed values: 123, 45.599998, hello

// */

// int main() {
//     char input[] = "123 abc 45.6";
//     int num1, num2;
//     float num3;

//     int successCount = sscanf(input, "%d %d %f", &num1, &num2, &num3);

//     printf("Number of successful assignments: %d\n", successCount);
//     printf("Parsed values: %d, %d, %f\n", num1, num2, num3);

//     return 0;
// }

// /*

// OUTPUT :
// Number of successful assignments: 1
// Parsed values: 123, 0, 0.000000

// */

// APPLICATION

// USING TO MAKE USER TO GIVE ONLY INTEGER AS INPUT AND TRY AGAIN IF NOT

int main() {
    while (true) {
        char input[20]; // Increased buffer size
        int number;

        printf("Enter a number: ");
        fgets(input, sizeof(input), stdin);

        if (sscanf(input, "%d", &number) == 1 && input[0] != '\n') {
            printf("Your number: %d\n", number);
            break;
        } else {
            printf("Try again please!!! Enter only integer value!!!\n\n");
        }
    }

    return 0;
}