#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,f=1;
    printf("Enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==a[i+1]){
            f++;
        }
        else{
            printf("%c,%d ",a[i],f);
            f=1;
        }
    }
    return 0;
}