//  [IMPORTANT]  //

#include<stdio.h>
#include<string.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);    
    // EOF [End of File]=>  It is used to indicate that there are no more characters to read from a file or input stream.
}

int main(){
    char str[50];
    printf("Enter a string : ");
    scanf("%s",&str);
    clearInputBuffer();     // we are doing this because scanf adds \n automatically
    printf("Your string : %s\n",str);
    
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name,"\n")] = '\0';
    printf("Your name : %s\n",name);

    // length
    printf("Name length : %d",strlen(name));
}