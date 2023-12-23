#include<stdio.h>
#include<string.h>

int main(void){
    char name[50];
    printf("Enter your name? ");
    fgets(name,sizeof(name),stdin);

    // strcspn => string complement span
    // strcspn(const char *str1, const char *str2)
    // str1 => the string to be searched, str2 => the character to be matched
    // strcspn() => gives the length from the initial point to the point of char

    // char * z = &name[2];
    // printf("%d\n",strcspn(z,"s"));   // o/p: 6 // since from i to s length is 6 as i start as 0
    // printf("%c\n",name[strcspn(z, "s")]);

    name[strcspn(name, "\n")] = '\0'; // return to remove \n as fgets adds \n in the end of string
    printf("hello %s nice to meet ya\n",name);

    printf("Enter new name? ");
    scanf("%49[^\n]", name); // get input as char till pressed enter (or) new line
    printf("hello %s nice to meet ya",name);

    // gets is not used as it is unsafe because it does not bound check and size of destination buffer 
}