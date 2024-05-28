#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i=0,len,j=0;
    char s[100],t[100],res[100];
    printf("Enter your firstname:");
    scanf("%s",s);
    printf("Enter your lastname:");
    scanf("%s",t);
  for(i=0;i<=strlen(s);i++){
    if(s[i]>='a' && s[i]<='z')
    {
        s[i]-=32;

    }
    }
    while(t[j] != '\0'){
    if(t[j]>='a' && t[j]<='z'){
        t[j]-=32;
        j++;
    }
    }
    //printf("%s",s);
    //printf("%s",t);
    //scanf("%[^\n]%*c",s); 
    strcat(res,s);
    strcat(res,t);
    printf("Your caplatized Sentence: %s\n",res);
    return 0;
}
/*Enter your firstname:gopi
Enter your lastname:prajapath
Your caplatized Sentence: GOPIPRAJAPATH*/
