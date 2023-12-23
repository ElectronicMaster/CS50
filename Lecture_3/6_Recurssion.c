#include<stdio.h>

// void pyramidCreator(int n,int per){
//     int temp = per;
//     for(int i=1; per+1!=n; i++){
//         printf("%d",i);
//         per--;
//     }
//     printf("\n");
//     n--;
//     if(n==0){
//         return;
//     }
//     pyramidCreator(n,temp);
// }

void pyramidCreator(int n){ // n = 3
    if(n<=0){
        return;
    }

    pyramidCreator(n-1); // n = 3,2,1

    for(int i=0;i<n;i++){ // n = 1,2,3
        printf("#");
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter pyramid size : ");
    scanf("%d",&n);

    pyramidCreator(n);
}