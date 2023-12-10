#include<stdio.h>
#include<string.h>

// to compare strings in c -> strcmp(string1,string2) == 0 [if they are equal]

int main(){
    int number[] = {20,500,10,5,100,1,50};
    int n;

    scanf("%d",&n);

    for(int i=0; i<7; i++){
        if(number[i] == n){
            printf("Position : %d", i+1);
            return 1;
        }
    }
    printf("Not found!!!");
    return 0;
}