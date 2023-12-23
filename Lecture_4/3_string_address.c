#include<stdio.h>

int main(){
    const char *s = "Hello";

    printf("s : %p\n\n",s);

    for(int i=0;i<5;i++){
        printf("s[%d] : %p\n",i,&s[i]);
    }

    printf("\n%c\n",*s);
    printf("%c\n",*(s+1));
}