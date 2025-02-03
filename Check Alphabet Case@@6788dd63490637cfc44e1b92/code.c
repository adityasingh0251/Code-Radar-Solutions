#include <stdio.h>

int main(){
    char ch;
    printf("enter singhle character: ");
    scanf("%c,&ch");
    if (ch >='A'&& ch<='Z'){
        printf("the character '%c'is an uppercase letter.\n",ch);
    }else if (ch>='a' && ch <='z'){
        printf("the character '%c' is a lowercase letter.\n,ch");
    }else {
        printf("the character '%c' is not a letter.\n",ch);
    }
    return 0;
}