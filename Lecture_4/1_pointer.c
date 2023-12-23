#include<stdio.h>

int main(){
    int n = 50;
    int *p = &n;

    printf("Address : %p\n", p);
    printf("Value : %i\n",*p);

    printf("\nSize of (n) : %i\n",sizeof(n));
    printf("Size of (p) : %i\n",sizeof(p));
}