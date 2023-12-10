#include<stdio.h>

float average(int calScore[],int size);

int main(){
    int n;
    printf("Number of scores : ");
    scanf("%d",&n);
    int score[n];

    for(int i=0;i<n;i++){
        printf("Enter score [%d] : ",i+1);
        scanf("%d",&score[i]);
    }

    printf("\n Average Score : %.2f",average(score,n));
}

float average(int calScore[], int size){
    int totalScore = 0;
    for(int i=0;i<size;i++){
        totalScore += calScore[i];
    }
    return (float)totalScore/size;
}