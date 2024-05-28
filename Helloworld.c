#include<stdio.h>
#include<string.h>
int main(){
    char s[100]="Hello" , t[100]="World" ,res[20];
    //strcat(res,s);
    //strcat(res,t);
    //printf("%s",res);
    strcat(s,t);
    printf("%s",s);

}
