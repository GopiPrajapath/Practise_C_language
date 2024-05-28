/* Write a C program that reads a sentence from the user and capitalizes the first letter of each word.
 For example, if the input is "the quick brown fox", the output should be "The Quick Brown Fox".*/


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i=0,len;
    char s[100];
    printf("Enter your Sentence:");
    fgets(s,sizeof(s),stdin);
    //scanf("%[^\n]%*c",s);
    len=strlen(s);
    printf("Your sentence is: %s\n",s);
    while(s[i] != '\0')
    {
        if(i==0){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-32;
            }
        }
        if(s[i]==' '){
            if(s[i+1]>='a' && s[i+1]<='z'){
                s[i+1]-=32;
            }
        }
        i++;
        //printf("%c",s[strlen(s)-1]);
        //break;
    }
    printf("Your caplatized Sentence: %s\n",s);
    return 0;
}

