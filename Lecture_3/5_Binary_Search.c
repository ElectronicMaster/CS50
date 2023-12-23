#include<stdio.h>
#include<math.h>

int main(){
    int number[] = {20,500,10,5,100,1,50};
    int length = sizeof(number)/sizeof(int);
    int middle = length/2;
    int searchVal;
    int i=0;
    int count = 0;
    int temp = 0;

    printf("Enter number : ");
    scanf("%d",&searchVal);

    while(count != 7){
        count = 0;
        for(int i=0;i<length;i++){
            if(number[i] > number[i+1] && i+1 < length){
                temp = number[i];
                number[i] = number[i+1];
                number[i+1] = temp;
            }else{
                count++;
            }
        }
    }

    int middleVal = number[middle];
    
    for(int i=0;i<length;i++){
        printf("%d ",number[i]);
    }

    while(searchVal != middleVal){
        if(middleVal < searchVal){
            middle = (middle+length)/2;
            middleVal = number[middle];
        }else if(middleVal > searchVal){
            middle = (middle)/2;
            middleVal = number[middle];
        }
    }

    printf("\n\nValue : %d\nIndex : %d",searchVal,middle);
}