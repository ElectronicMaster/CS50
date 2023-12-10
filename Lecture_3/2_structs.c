#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct phoneNumber{
    char name[50];
    long long int phone;
};

int main(){
    struct phoneNumber names[] = {{"Saianuush",6379829326},{"Jishnu",638295326},{"Thirumalai",1234567890}}; 
    int length = sizeof(names)/sizeof(struct phoneNumber);
    char name[50];

    printf("Enter name : ");
    scanf("%s",&name);

    for(int i=0;i<length;i++){
        if(strcmp(name,(names[i]).name) == 0){
            printf("\nName : %s, Phone no : %lli",names[i].name,names[i].phone);
            return 1;
        }
    }
    printf("Phone Number not found...");
    return 0;
}