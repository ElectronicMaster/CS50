#include<stdio.h>

int main(){
    int array[] = {7,2,5,4,1,6,0,3};
    int length = sizeof(array)/sizeof(int);
    int perlength = length;

    int i,j;
    for(i=0;i<perlength;i++){
        int n = array[i];
        int k = i;
        for(j=0;j<length;j++){
            if(n>array[j+i]){
                n = array[j+i];
                k = j+i;
            }
        }
        int temp = array[i];
        array[i] = n;
        array[k] = temp;
        length--;
    }
    for(i=0;i<perlength;i++){
        printf("%d ", array[i]);
    }
}