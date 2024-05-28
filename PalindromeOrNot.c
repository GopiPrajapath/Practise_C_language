*Palindrome Check Write a program to check if a given string is a palindrome or not.
Example: Input: "radar" Output: "Palindrome"  */



#include<stdio.h>
#include<string.h>

int main(){
    char s[100],rev[100];
    printf("Enter the string:");
    scanf("%s",s);
    int count=0,len= strlen(s);
    rev[len]='\0';
    for(int i=0;s[i] != '\0' ;i++){
        rev[i]=s[len-1];
        len--;
    }
    if(strcmp(s,rev)==0)
        printf("It is a palimdrome");
    else
        printf("It is not a palimdrome");
}