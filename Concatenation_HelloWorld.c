/*
strcat() in C
Syntax : char *strcat(char *dest, const char *src);
*/

// Write a c program to concatenate Hello and world strings.


#include<stdio.h>
#include<string.h>


int main(){
    char x[10]="Hello" , y[10] = "World" ;
    strcat(x,y);
    printf("%s",x);
    return 0;


}
