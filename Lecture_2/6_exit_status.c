#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Missing-Command-Line-Arguement");
        return 1;   // False
    }else{
        printf("Hello, %s",argv[1]);
        return 0;   // True
    }
}

// use echo $?

/*
$status = $?
if ($status -eq 1) {
    Write-Host "Exit status is 1"
} else {
    Write-Host "Exit status is not 1"
}
*/