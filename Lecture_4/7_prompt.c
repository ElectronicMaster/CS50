#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
    while(true){
        char x[10];
        bool y = false;
        printf("Enter a number: ");
        fgets(x,10,stdin);
        
        if(x[strlen(x)-1] == '\n'){
            x[strlen(x)-1] = '\0';
        }
        for(int i=0,n=strlen(x);i<n;i++){
            if(isdigit(x[i])){
                y = true;
            }
            if(x[i] == '.'){
                y = true;
            }
            if(isalpha(x[i])){
                y = false;
                break;
            }
        }
        if(y == false){
            printf("Try again please!!! Enter only Integer value!!!\n\n");
            continue;
        }else{
            printf("Your number : %s\n",x);
            break;
        }
    }
}