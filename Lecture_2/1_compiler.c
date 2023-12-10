#include<stdio.h>

/*

## 1 ##
gcc 1_compiler.c
clang 1_compiler.c
both, ---> creates a executable file called a.exe

We can convert it to, mv a 1_compiler

instead,
## 2 ##
gcc -o 1_compiler 1_compiler.c
clang -o 1_compiler 1_compiler.c
both, ---> creates 1_compiler.exe

but if with 3rd part library, gcc -o hello hello.c -l<no space>

but,
    instead use "make hello.c"

*/

int main(){
    printf("Hello world");
}