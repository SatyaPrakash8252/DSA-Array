#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    int i=0;
    printf("Enter first string ");
    scanf("%s",a);
    printf("Enter second string ");
    scanf("%s",b);
    while(a[i] && b[i] && a[i]==b[i]){
        printf("%c",a[i]);
        i++;
    }
    return 0;
}