#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char x[50];
    printf("Enter s1 : ");
    scanf("%s",&x);

    char *s = malloc(strlen(x)+1);

    for(int i=0, length = strlen(x);i<length+1;i++){ // Why strlen(x)+1? : Because to copy null character at the end too
        s[i] = x[i];
    }
    // strcpy(s,x);

    printf("x : %s\n",x);
    s[0] = toupper(s[0]);
    printf("s : %s\n",s);
    printf("x : %s\n",x);

    printf("\nSize of s : %d\n", sizeof(s));
    printf("s : %s\n",s);
    free(s);
    printf("Size of s : %d\n", sizeof(s));
    printf("s : %s\n",s);
}