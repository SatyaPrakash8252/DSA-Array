#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int i,j,f=0,len1,len2;
    printf("Enter first string");
    scanf("%s",a);
    printf("Enter second string");
    scanf("%s",b);
    len1=strlen(a);
    len2=strlen(b);
    if(len1!=len2){
        printf("Not an angram");
    }
    for(i=0;a[i]!='\0';i++){
       for(j=0;b[j]!='\0';j++){
            if(a[i]==b[j]){
                f++;
            }
       }
        if(f==1){
            printf("Anagram");
           return 0;
        }
    }
    printf("Not an anagram");
    return 0;
}