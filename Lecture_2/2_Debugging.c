#include<stdio.h>

// red dot -> break point where program to stop

void ground(){
    const int groundLength = 34;
    const int groundHeight = 2;

    for(int i=0;i<groundHeight;i++){
        for(int j=0;j<groundLength;j++){
            printf("#");
        }
        printf("\n");
    }
}

void wall(){
    const int wallHeight = 2;
    const int wallPosition = 16;
    const int wallLength = 3;
    
    for(int i=0;i<wallHeight;i++){
        for(int j=0;j<wallPosition;j++){
            printf(" ");
        }
        for(int k=0;k<wallLength;k++){
            printf("#");
        }
        printf("\n");
    }
}

int main(){
    ground();
    wall();
    for(int i=0;i<2;i++){
        for(int j=0;j<13;j++){
            printf("#");
        }
        printf("\n");
    }
    wall();
    ground();
}