#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char ch1,ch2;
    printf("Enter two small letters : ");
    scanf("%c %c",&ch1,&ch2);
    if( ch1>='a' && ch1<='z'){
        ch1 -=32;
    }
    if( ch2>='a' && ch2<='z'){
        ch2-=32;
    }
    printf("Your Captalized characters are:%c %c",ch1,ch2);
    return 0;
}
/* 
Enter two small letters : g b
Your Captalized characters are:G B  
*/