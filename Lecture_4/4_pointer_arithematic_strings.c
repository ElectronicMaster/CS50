#include<stdio.h>
#include<string.h>

int main(){
    char *s = "Hello World";

    printf("%s\n",s);
    printf("%s\n",s+1);
    printf("%s\n",s+2);
    printf("%s\n",s+5);

    // in array also for diff data type +1,+2,+3 is enough

    char x[50];
    char y[50];

    printf("\nEnter s1 : ");
    scanf("%s",&x);
    printf("Enter s2 : ");
    scanf("%s",&y);

    printf("Length : %d\n",strlen(x));

    if(strcmp(x,y) == 0){
        printf("Same!!!\n");
    }else{
        printf("Not Same!!!\n");
    }
}