#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char x[50];
    char y[50];

    printf("Enter s1 : ");
    scanf("%s",&x);
    printf("Enter s2 : ");
    scanf("%s",&y);

    if(strcmp(x,y) == 0){
        printf("Same!!!\n");
    }else{
        printf("Not Same!!!\n");
    }

    printf("\nLENGTH\n");
    printf("length : %d\n",strlen(x));

    printf("\nUPPER CASE\n");
    for(int i=0;i<strlen(x);i++){
        x[i] = toupper(x[i]);
    }
    printf("s1 : %s\n",x);
    
    printf("\nCOPYING\n");
    char z[10];
    strcpy(z,x);
    printf("%s\n",z);
    /*
    
    Use strcpy(): 
        * if z = x; we did means address of x is copied to z hence if we modify x it will modify z too
        * strcpy() will ensure not to happen

    */
}