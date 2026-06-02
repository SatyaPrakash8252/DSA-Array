#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,f=0;
    printf("Enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='('|| a[i]=='{' || a[i]=='['){
            f++;
        }
        else if(a[i]==')'|| a[i]== '}' || a[i]== ']'){
            f--;
        }    
    }
    if(f==0){
        printf("Valid parenthesis");
    }
    else{
        printf("not vlaid parenthis");
    }
    return 0;
}