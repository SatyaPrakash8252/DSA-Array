#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,j,f=0;
    printf("Enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
       for(j=0;a[j]!='\0';j++){
            if(a[i]==a[j]){
                f++;
            }
       }
        if(f==1){
            printf("Non repeating character=%c",a[i]);
           return 0;
        }
    }
    printf("Non repeating character is not found");
    return 0;
}