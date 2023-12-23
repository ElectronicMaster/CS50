#include<stdio.h>

int main(){
    int n;
    do{
        printf("Block lenght? ");
        scanf("%d",&n);
        if(n<1){
            printf("Give Block length as +ve value!!!\n\n");
        }
    }while(n<1);
    for(int i=0; i<n; i++){
        printf("#");
    }
    printf("\n");
    long z = 100000;
    printf("%li\n",z);
    long long za = 100000000000000000;
    printf("%lli\n",za);
}