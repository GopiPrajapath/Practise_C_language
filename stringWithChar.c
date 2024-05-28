#include<stdio.h>
#include<string.h>

int main(){
    int i=0;
    char s[20],ch;
    printf("Enter your string:\n");
    scanf("%s",s);
    printf("Enter your character:\n");
    scanf(" %c",&ch);
    int len=strlen(s);
    s[len]=ch;
    s[len+1]='\0';
    printf("%s",s);
    return 0;
}