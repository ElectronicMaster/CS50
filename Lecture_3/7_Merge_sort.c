#include<stdio.h>

int main(){
    int array[] = {7,2,5,4,1,6,0,3};
    int length = sizeof(array)/sizeof(int);
    int tempArray[length];
    int k=0;

    int middle = length/2;

    for(int i=1;i<length;i*=2){
        int temp = i;
        int j = 0; 
        while(j<temp){
            if(array[j] < array[temp]){
                tempArray[k] = array[j];
                if(temp<i){
                    temp++;
                }
                k++;
            }else{
                tempArray[k] = array[temp];
                
            }
        }
    }
}