#include<stdio.h>
int main(){
    char s[100];
    int i=0,len=0,flag=1;
    printf("Enter string");
    scanf("%s",s);
    while(s[len]!='\0'){
        len++;
    }
    for(i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Pallindrome= %s",s);
    }
    else{
        printf("Not Pallindrome= %s",s);
    }
    return 0;
}