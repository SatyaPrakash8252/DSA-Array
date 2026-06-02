#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,f=0;
    printf("Enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        if(i>f){
            f=i;
        }
    }
    printf("Maximum sub sequence = %d",f);
    return 0;
}