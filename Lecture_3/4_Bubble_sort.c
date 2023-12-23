#include<stdio.h>

int main(){
    int array[] = {7,2,5,4,1,6,0,0,3};
    int length = sizeof(array)/sizeof(int);
    int count = 0;
    int temp = 0;

    while(count != 9){
        count = 0;
        for(int i=0;i<length;i++){
            if(array[i] > array[i+1] && i+1 < length){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }else{
                count++;
            }
        }
    }

    for(int i=0;i<length;i++){
        printf("%d ",array[i]);
    }
}