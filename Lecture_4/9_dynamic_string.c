#include<stdio.h>
#include<stdlib.h>

int main(){
    char *str = malloc(5*sizeof(char));

    printf("Enter 10 characters : ");
    fgets(str,10,stdin);

    printf("Character : %s", str);

    free(str);
}